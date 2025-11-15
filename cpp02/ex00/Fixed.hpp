/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:07:10 by wshee             #+#    #+#             */
/*   Updated: 2025/11/15 23:18:13 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		// Copy constructor
		Fixed(const Fixed &copy);
		// Copy assignment operator everload
		Fixed &operator=(const Fixed &other);
		// Destructor
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

# endif
