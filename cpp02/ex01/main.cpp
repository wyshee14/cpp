/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:07:17 by wshee             #+#    #+#             */
/*   Updated: 2025/11/16 13:07:15 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main()
{
	Fixed		a;
	// Const object cannot be modified after initialization by constructor
	Fixed const	b(10);
	Fixed const	c(42.42f);
	// Copy constructor
	Fixed const	d(b);

	// Copy Assignment operator consructor
	// using a float constructor (as a temperary object)
	// after copy it will be destroyed
	a = Fixed( 1234.4321f );

	// Overload insertion operator
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
