/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:55:28 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 15:55:30 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main()
{
	// Default constructor
	Fixed a;
	// Copy constructor - b has not created yet
	Fixed b(a);
	Fixed c;

	// assignment operator =
	// c is an existing object
	// copy the right value to the left value
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
