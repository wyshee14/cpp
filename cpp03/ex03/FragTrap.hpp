/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:05:08 by wshee             #+#    #+#             */
/*   Updated: 2026/01/19 21:27:58 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		//-----OCF-----
		// Default constructor
		FragTrap();
		// Copy Constructor
		FragTrap( const FragTrap &copy);
		// Copy Assignment operator
		FragTrap &operator=(const FragTrap &other);
		
		// Parameterized constructor
		FragTrap(const std::string& name);
		~FragTrap();
		std::string	getClassName( void ) const;
		void		highFiveGuys( void );
};

# endif
