/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:19:25 by wshee             #+#    #+#             */
/*   Updated: 2026/01/19 09:27:16 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

// this class inherits from 2 different base class
//         ClapTrap (virtual base - shared)
//           /    \
//    ScavTrap    FragTrap
//           \    /
//        DiamondTrap
class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap(const std::string& name);
		~DiamondTrap();
		std::string getClassName() const;
};

# endif
