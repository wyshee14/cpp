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
	instance.complain(filter);

	return 0;
}
