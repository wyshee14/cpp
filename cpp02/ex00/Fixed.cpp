# include "Fixed.hpp"

// Default constructor - set the value to 0
Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor initialized a new object as a copy of an existing object
// Must pass by reference to avoid creating a new object of "copy" again
// DO NOT pass by value, will cause infinite loop
// const - not modify the exisitng object
// in this case is a shallow copy
// each of them have different memory address, only copy the value of member function with primitive types
// eg primitive types - int, char, float, double
// shallow copy constructor - pointing to same memory address (copies for memory address only)
// Deep copy - allocate new memory address (only required if member function is pointer)
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    // Call assignment operator
    *this = copy;
    // _fixedPointValue = copy.getRawBits();
}

// assignment operator only applies to non-static member function
// argument must be same class type
// replaces the contents of an already existing object
// use when we need to handle deep copy and self assignment
// shallow copy of each member of class from one object to another
Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    // Check left and right are the same object - eg: a=a
    // self assignment (prevent copy from own self)
    // this = address of object left
    // &other = address of object right
    if (this != &other)
    {
        // copy the data from right to left
        _fixedPointValue = other.getRawBits();
    }
    // return reference (no copy) for chaining (c = b)
    // dereferenced pointer - the object itself
    return(*this);
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// const means cannot modify the member function of the object
// fixed point value is as integer return type
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

// Store the given integer into fixed point
void Fixed::setRawBits( int const raw )
{
    _fixedPointValue = raw;
}
