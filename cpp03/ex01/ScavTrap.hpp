/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:16:16 by wshee             #+#    #+#             */
/*   Updated: 2026/01/13 00:01:39 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// Inheritance does not inherit the constructor and destructor of the parent class
// Derived class must be publicly inherited so that it can be usable everywhere
// semicolon(:) is the access specifier for inheritance
class ScavTrap: public ClapTrap
{
	public:
		ScavTrap (std::string name);
		~ScavTrap();
		void attack(const std::string& target);
};

# endif
