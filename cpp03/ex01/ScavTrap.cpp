/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:05:07 by wshee             #+#    #+#             */
/*   Updated: 2026/01/13 00:01:31 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

// Constructor (Base > Derived)
// Base class is called first to initialize all the member function in base
// Method parameterized constructor from parent class
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

// Destructor (Derived > Base)
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (isDead())
		return ;
	_energyPoints--;
	std::cout << "ScavTrap " << getName() << " attacks " << target << ",causing " << getAttackDamage() << " points of damage!" << std::endl;
}