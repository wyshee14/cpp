/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:07:17 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 16:45:06 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int main()
{
	Fixed	a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	Fixed c(5);
	Fixed d = c + b;
	std::cout << d << std::endl;

	Fixed e( Fixed(10) / Fixed(0));
	std::cout << e << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	if (a == b)
		std::cout << "a is equals to b" << std::endl;
	else
		std::cout << "a is not equals to b" << std::endl;

	if (a > b)
		std::cout << "a is larger than b" << std::endl;
	else
		std::cout << "a is not larger than b" << std::endl;

	return 0;
}
