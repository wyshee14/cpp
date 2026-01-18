/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:16:26 by wshee             #+#    #+#             */
/*   Updated: 2026/01/18 11:52:27 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
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
