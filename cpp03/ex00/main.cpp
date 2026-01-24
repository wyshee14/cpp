/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:57:05 by wshee             #+#    #+#             */
/*   Updated: 2026/01/24 21:06:17 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	// only one object is created in memory
	// constructor just initialize different parts of that single projects
	ClapTrap clap("Object");

	// Test 1: when Claptrap attack, claptrap spend energy
	clap.attack("enemy");
	std::cout << "ClapTrap " << clap.getName() << " have " << clap.getEnergyPoints() << " energy points" << std::endl;
	// Test 2: when enemy attack claptrap, hit point should reduce
	clap.takeDamage(5);
	std::cout << "ClapTrap " << clap.getName() << " have " << clap.getHitPoints() << " hit points" << std::endl;
	//Test 3: when claptrap repair, hitpoint increase cap at 10, energy decrease
	clap.beRepaired(7);
	std::cout << "ClapTrap " << clap.getName() << " have " << clap.getHitPoints() << " hit points" << std::endl;
	// Test 4: when enemy attack claptrap, lose hitPoints
	clap.takeDamage(50);
	std::cout << "ClapTrap " << clap.getName() << " have " << clap.getHitPoints() << " hit points" << std::endl;
	// Test 5: when no hit points left
	clap.attack("enemy");
	std::cout << "ClapTrap " << clap.getName() << " have " << clap.getEnergyPoints() << " energy points" << std::endl;
	clap.takeDamage(5);
	std::cout << "ClapTrap " << clap.getName() << " have " << clap.getHitPoints() << " hit points" << std::endl;
}
