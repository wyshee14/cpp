/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:05:07 by wshee             #+#    #+#             */
/*   Updated: 2026/01/19 22:21:48 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &other )
{
	std::cout << "ScavTrap Assignment Operator Constructor called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}	
	return (*this);
}

// Constructor (Base > Derived)
// Base class is called first to initialize all the member function in base
// Method parameterized constructor from parent class
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
}

// Destructor (Derived > Base)
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

std::string ScavTrap::getClassName( void ) const
{
	return "ScavTrap ";
}

void ScavTrap::attack(const std::string& target)
{
	if (isDead())
		return ;
	_energyPoints--;
	std::cout << "ScavTrap " << getName() << " attacks " << target << ",causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << BLUE << "ScavTrap " << getName() << " is now in Gate keeper mode" << RESET << std::endl;
}
