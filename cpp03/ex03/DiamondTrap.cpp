/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:24:24 by wshee             #+#    #+#             */
/*   Updated: 2026/01/24 21:22:19 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	this->_name = "Default DiamondTrap";
	this->_hitPoints = FragTrap::_hitPoints;
	// Can't do this cuz the last parent (FragTrap) will overwrite the value
	// this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = 50;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	// Calls assignment operator
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )
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

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	_name(name)
{
	std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	// this->_energyPoints = ScavTrap::_energyPoints;
	this->_energyPoints = 50;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

std::string DiamondTrap::getName( void ) const
{
	return this->_name;
}

std::string DiamondTrap::getClassName( void ) const
{
	return "DiamondTrap ";
}

void DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << BLUE << "My name is " << getName() << RESET << std::endl;
	std::cout << BLUE << "My grandparent name is " << ClapTrap::_name << RESET << std::endl;
}

void DiamondTrap::printCurrentStatus( void )
{
	std::cout << GREEN << getClassName() << getName() << "--> Hit points: " << getHitPoints() << ", Energy points: " << getEnergyPoints() << RESET << std::endl;
}
