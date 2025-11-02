/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:31:57 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:31:57 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		// Human B not always have a weapon
		// Pointer can be NULL;
		// Weapon can be set later and change the value；
		Weapon *_weaponB;
		std::string _name;

	public:
		void attack( void );
		const std::string& getName( void ) const;
		// Weapon passed as reference
		void setWeapon(Weapon &weaponB);
		HumanB(std::string name);
		~HumanB();
};

# endif
