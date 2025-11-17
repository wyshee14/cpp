/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:07:17 by wshee             #+#    #+#             */
/*   Updated: 2025/11/16 17:27:27 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main()
{
	Fixed	a(0);
	Fixed	b(1);
	// Fixed const	b(Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << Fixed::min(a, b) << std::endl;
	if (a == b)
		std::cout << "a is equals to b" << std::endl;

	Fixed c = b + a;
	std::cout << "c is " << c << std::endl;

	std::cout << ++a << std::endl;

	return 0;
}
