/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:07:10 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 17:59:35 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
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
	};

// non member function
// insertion operator overloading
// refering to the left side of the operator (it is not belongs to the class)
// so have to be outside of the class
// taking first parameter as cout stream (left)
std::ostream &operator<<(std::ostream &out, const Fixed &other);

# endif
