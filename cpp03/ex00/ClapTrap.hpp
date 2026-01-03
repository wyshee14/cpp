/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:00:57 by wshee             #+#    #+#             */
/*   Updated: 2026/01/03 15:18:36 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		// Health points
		unsigned int	_hitPoints;
		// Energy spent in attacking and repairing
		unsigned int	_energyPoints;
		// Reduce the target hit points when attack
		unsigned int	_attackDamage;

	public:
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName( void ) const;
		unsigned int	getAttackDamage( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		bool			isDead( void );
		ClapTrap(std::string name);
		~ClapTrap();
};

#endif
