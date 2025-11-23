/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:25:57 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 16:47:58 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

// Default constructor - set the value to 0
Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Fixed number is a larger integer
// FP (32 bits): 1 bit sign, 23 bit int, 8 bit fractional
// 			(most significant)			(least significant)
// precision to store 8 bits decimal point as a float
// convert int to FP (fp = int * 2^8)
Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(number);
}

// convert float to FP (fp = int * 2^8)
Fixed::Fixed(float const number)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(number);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
    // Call assignment operator
    *this = copy;
    // _fixedPointValue = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other)
    {
		// copy the data
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

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

// Store the given integer into fixed point
void Fixed::setRawBits( int const raw )
{
	// shift left 8 bits (n * 2^8)
	_fixedPointValue = raw << _fractionalBits;
}

// Store the given float into fixed point
void Fixed::setRawBits( float const raw )
{
	// cannot directly shift bits for float (only for integer)
	// calculate scaling factor
	float scale = 1 << _fractionalBits;
	// Multiply float with scaling factor
	// Round up the result to nearest integer
	_fixedPointValue = roundf(raw * scale);
}

// convert fixed point value to an integer value
int Fixed::toInt( void ) const
{
	int number = _fixedPointValue >> _fractionalBits;
	return number;
}

// convert fixed point value to a floating point value
float Fixed::toFloat( void ) const
{
	// changing the integer type to float
	float scale = 1 << _fractionalBits;
	// Typecast int to float before dividing
	float number = static_cast<float>(_fixedPointValue) / scale;
	return number;
}

// operator overloading allow objects to behave like data types
// Insertion operator (<<) can be used as bitshift operator or output streams
// return ostream by reference to allow chaining (avoid copying)
// Pass both the stream and the object by reference to avoid unnecessary copying.
// Declare the parameter as const in the insertion operator (<<) since output operations do not modify the object.
// tells cout how to print this object
std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return out;
}

// operator > overloading
// always put const at the end because we dont want to modify the object
bool Fixed::operator>( const Fixed &other ) const
{
	return(this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<( const Fixed &other ) const
{
	return(this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=( const Fixed &other ) const
{
	return(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=( const Fixed &other ) const
{
	return(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator==( const Fixed &other ) const
{
	return(this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=( const Fixed &other ) const
{
	return(this->getRawBits() != other.getRawBits());
}

// Arithmetic operator overloading
Fixed Fixed::operator+( const Fixed &other )
{
	// return a copy with new value
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-( const Fixed &other )
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*( const Fixed &other )
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/( const Fixed &other )
{
	if (other.toFloat() == 0)
	{
		std::cerr << "Number cannot be divided by 0" << std::endl;
	}
	return Fixed(this->toFloat() / other.toFloat());
}

// Pre-increment overloading (++a)
// modify the object first for both object (original and copy same)
// Returns a reference of the same object after increment
Fixed &Fixed::operator++()
{
	// normal integer fixedPointValue + int 1
	// ϵ = 1/256 ≈ 0.00390625 (smallest increment)
	++_fixedPointValue;
	// return reference the object after increment
	return	*this;
}

// Post-increment overloading (a++)
// Stores the original copy as temp and increment later
// Return a copy of the before increment value
// int in parameter is used to differentiate between pre and post increment
Fixed Fixed::operator++(int)
{
	//retrun should be a copy of object before increment
	Fixed temp = *this;
	++_fixedPointValue;
	return	temp;
}

// Pre-decrement overloading
Fixed &Fixed::operator--()
{
	--_fixedPointValue;
	return	*this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--_fixedPointValue;
	return	temp;
}

// overloading member functions
Fixed Fixed::max( const Fixed &first, const Fixed &second)
{
	if (first > second)
		return first;
	return second;
}

Fixed Fixed::max( Fixed &first, Fixed &second )
{
	if (first > second)
		return first;
	return second;
}

Fixed Fixed::min( const Fixed &first, const Fixed &second)
{
	if (first < second)
		return first;
	return second;
}

Fixed Fixed::min( Fixed &first, Fixed &second )
{
	if (first < second)
		return first;
	return second;
}
