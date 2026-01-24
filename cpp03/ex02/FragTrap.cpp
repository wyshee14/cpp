/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:16:26 by wshee             #+#    #+#             */
/*   Updated: 2026/01/24 14:40:25 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default Constructor called" << std::endl;
	this->_name = "Default FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=( const FragTrap &other )
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

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap Parameterized constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

std::string FragTrap::getClassName( void ) const
{
	return "FragTrap ";
}

void FragTrap::highFiveGuys( void )
{
	std::cout << MAGENTA <<"FragTrap " << getName() << " requests a positive high-five!" << RESET << std::endl;
}
