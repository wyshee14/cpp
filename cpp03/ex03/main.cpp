/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:57:05 by wshee             #+#    #+#             */
/*   Updated: 2026/01/19 22:01:07 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Diamond("P1");
	Diamond.printCurrentStatus();

	Diamond.attack("enemy");
	Diamond.printCurrentStatus();

	// Diamond.highFiveGuys();

	// Diamond.takeDamage(20);
	// Diamond.printCurrentStatus();

	// Diamond.beRepaired(20);
	// Diamond.printCurrentStatus();
}
