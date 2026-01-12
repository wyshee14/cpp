/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:00:57 by wshee             #+#    #+#             */
/*   Updated: 2026/01/13 00:28:34 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	public:
		std::string		_name;
		// Health points
		unsigned int	_hitPoints;
		// Energy spent in attacking and repairing
		unsigned int	_energyPoints;
		// Reduce the target hit points when attack
		unsigned int	_attackDamage;

	// public:
		// use virtual when overiding function in derived class during run-time(polymorphism)
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName( void ) const;
		unsigned int	getAttackDamage( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		bool			isDead( void );
		ClapTrap(std::string name);
		// put virtual in base class to chain the derived class when deleting the object
		// else the derived class is not properly clean up
		virtual ~ClapTrap();
};

#endif
