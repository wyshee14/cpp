/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:25:57 by wshee             #+#    #+#             */
/*   Updated: 2025/11/16 12:50:32 by wshee            ###   ########.fr       */
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
	_fixedPointValue = number << _fractionalBits;
}

// convert float to FP (fp = int * 2^8)
Fixed::Fixed(float const number)
{
	std::cout << "Float constructor called" << std::endl;
	// calculate scaling factor
	float scale = 1 << _fractionalBits;
	// Multiply float with scaling factor
	// Round up the result to nearest integer
	_fixedPointValue = roundf(number * scale);
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
        _fixedPointValue = other._fixedPointValue;
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
