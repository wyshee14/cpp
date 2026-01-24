/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:57:05 by wshee             #+#    #+#             */
/*   Updated: 2026/01/24 21:17:10 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main()
{
	// Default constructor
	DiamondTrap defaultDiamond;
	// DiamondTrap copyDiamond(defaultDiamond);
	DiamondTrap Diamond("D1");
	// DiamondTrap Diamond2("D2");
	// Diamond2 = Diamond;

	std::cout << "defaultDiamnond Name: " << defaultDiamond.getName() << std::endl;
	defaultDiamond.printCurrentStatus();
	// copyDiamond.printCurrentStatus();
	Diamond.printCurrentStatus();
	// Diamond2.printCurrentStatus();
	
	Diamond.whoAmI();
	Diamond.attack("enemy");
	Diamond.printCurrentStatus();

	Diamond.takeDamage(20);
	Diamond.printCurrentStatus();
	
	Diamond.beRepaired(20);
	Diamond.printCurrentStatus();

	Diamond.highFiveGuys();
}
