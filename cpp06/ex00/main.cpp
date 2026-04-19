/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 13:57:17 by wshee             #+#    #+#             */
/*   Updated: 2026/04/19 19:25:19 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2 || av[1] == NULL)
	{
		std::cerr << "Error: Too few arguments. Please enter one argument" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);

	return 0;
}
