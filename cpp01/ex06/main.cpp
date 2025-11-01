/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:21:47 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 16:21:47 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
# include <sstream>     //use ostringstream, write into string instead of console

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Only one argument is needed!\n";
		std::cerr << "Choose one level: [\"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\"]"<< std::endl;
		return 1;
	}

	std::string filter = av[1];
	Harl instance;

	switch(instance.GetLevel(filter))
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			instance.complain("DEBUG");
		case 1:
			std::cout << "[ INFO ]\n";
			instance.complain("INFO");
		case 2:
			std::cout << "[ WARNING ]\n";
			instance.complain("WARNING");
		case 3:
			std::cout << "[ ERROR ]\n";
			instance.complain("ERROR");
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}
