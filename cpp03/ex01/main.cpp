/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:57:05 by wshee             #+#    #+#             */
/*   Updated: 2026/01/18 11:00:31 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	ScavTrap Scav("P1");
	Scav.printCurrentStatus();

	for (int i = 0; i < 51; i++)
	{
		Scav.attack("enemy");
		Scav.printCurrentStatus();
	}

	Scav.guardGate();

	Scav.takeDamage(20);
	Scav.printCurrentStatus();

	Scav.beRepaired(20);
	Scav.printCurrentStatus();

	// Test for pointers (runtime polymorphism)
	// ClapTrap* ptr = new ScavTrap("Robot");
	// ptr->attack("enemy");

	// delete ptr;
}
