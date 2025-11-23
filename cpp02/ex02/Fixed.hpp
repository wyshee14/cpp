/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:07:10 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 16:52:26 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		// non-static member function only exist when object created
		int _fixedPointValue;
		// static can be access without creating an object - like global variable
		// can directly access from the class
		// return type const is not modifiable
		static const int _fractionalBits = 8;

	public:
		// Default constructor
		Fixed();
		// Function overloading (different param) - Parameterized constructor
		Fixed(int const number);
		Fixed(float const number);
		// Copy constructor
		Fixed(const Fixed &copy);
		// Copy assignment operator everload
		Fixed &operator=(const Fixed &other);
		// Destructor
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		void setRawBits( float const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		// Comparison Operator overloading
		bool operator>( const Fixed &other) const;
		bool operator<( const Fixed &other) const;
		bool operator>=( const Fixed &other) const;
		bool operator<=( const Fixed &other) const;
		bool operator==( const Fixed &other) const;
		bool operator!=( const Fixed &other) const;

		// Arithmetic operator overloading
		Fixed operator+( const Fixed &other );
		Fixed operator-( const Fixed &other );
		Fixed operator*( const Fixed &other );
		Fixed operator/( const Fixed &other );

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		// Static member function
		// Can be access outside of the class without creating an object
		static Fixed max( const Fixed &first, const Fixed &second );
		static Fixed max( Fixed &first, Fixed &second );
		static Fixed min( const Fixed &first, const Fixed &second );
		static Fixed min( Fixed &first, Fixed &second );
	};

// non member function
// insertion operator overloading
// refering to the left side of the operator (it is not belongs to the class)
// so have to be outside of the class
// taking first parameter as cout stream (left)
std::ostream &operator<<(std::ostream &out, const Fixed &other);

# endif
