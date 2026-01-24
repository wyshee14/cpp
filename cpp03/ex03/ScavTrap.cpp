/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:05:07 by wshee             #+#    #+#             */
/*   Updated: 2026/01/24 14:35:35 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	this->_name = "Default ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &other )
{
	if (this != &other)
	{
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
		this->_name = other.getName();
	}	
	return (*this);
}

// Constructor (Base > Derived)
// Base class is called first to initialize all the member function in base
// Method parameterized constructor from parent class
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
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
