/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:16:16 by wshee             #+#    #+#             */
/*   Updated: 2026/01/19 21:27:10 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// Inheritance does not inherit the constructor and destructor of the parent class
// Derived class must be publicly inherited so that it can be usable everywhere
// semicolon(:) is the access specifier for inheritance
class ScavTrap: virtual public ClapTrap
{
	public:
		//-----OCF-----
		// Default constructor
		ScavTrap();
		// Copy Constructor
		ScavTrap( const ScavTrap &copy);
		// Copy Assignment operator
		ScavTrap &operator=(const ScavTrap &other);
		
		//Parameterized Constructor
		ScavTrap (const std::string& name);
		~ScavTrap();
		std::string	getClassName( void ) const;
		void 		attack(const std::string& target);
		void 		guardGate();
};

# endif
