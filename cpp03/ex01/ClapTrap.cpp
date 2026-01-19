/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:51:44 by wshee             #+#    #+#             */
/*   Updated: 2026/01/19 21:49:21 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy )
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &other )
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

ClapTrap::ClapTrap(const std::string& name):_name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

// attack reduce 1 energy point
void ClapTrap::attack(const std::string& target)
{
	if (isDead())
		return ;
	// if (getEnergyPoints() > 0)
	_energyPoints--;
	std::cout << getClassName() << getName() << " attacks " << target << ",causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (isDead())
		return ;
	std::cout << getClassName() << getName() << " take damage of " << amount << " hit points" <<std::endl;
	if (amount > _hitPoints)
	{
		_hitPoints = 0;
		std::cout << getClassName() << getName() << " is died with " << getHitPoints() << " hit points" << std::endl;
		return ;
	}
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() == 0)
	{
		std::cout << RED << getClassName() << getName() << " cannot be repaired, no energy point left." << RESET << std::endl;
		return ;
	}
	if (getHitPoints() == 10)
		std::cout << "Hit Points is max." << std::endl;
	if (amount > getEnergyPoints())
	{
		std::cout << getClassName() << getName() << " do not have enough energy points to repair" << std::endl;
		return ;
	}
	if (amount > 10 - getHitPoints())
	{
		// Cap to maximum amount 10 hit points
		amount = 10 - getHitPoints();
	}
	_energyPoints -= amount;
	_hitPoints += amount;
	std::cout << getClassName() << getName() << " regains " << amount << " hit points" <<std::endl;
}

std::string ClapTrap::getClassName( void ) const
{
	return "ClapTrap ";
}

std::string ClapTrap::getName( void ) const
{
	return _name;
}

unsigned int ClapTrap::getAttackDamage( void ) const
{
	return _attackDamage;
}

unsigned int ClapTrap::getHitPoints( void ) const
{
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints( void ) const
{
	return _energyPoints;
}

bool ClapTrap::isDead( void )
{
	if (getEnergyPoints() == 0 || getHitPoints() == 0)
	{
		std::cout << RED << getClassName() << getName() << " cannot attack or be repaired, no energy point and hit point left." << RESET << std::endl;
		return true;
	}
	return false;
}

void ClapTrap::printCurrentStatus( void )
{
	std::cout << GREEN << getClassName() << getName() << "--> Hit points: " << getHitPoints() << ", Energy points: " << getEnergyPoints() << RESET << std::endl;
}
