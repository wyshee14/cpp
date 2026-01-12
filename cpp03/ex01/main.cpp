/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:57:05 by wshee             #+#    #+#             */
/*   Updated: 2026/01/13 00:14:03 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main()
{
	ScavTrap Scav("Scav");
	Scav.attack("enemy");

	ClapTrap* ptr = new ScavTrap("Robot");
	ptr->attack("enemy");

	delete ptr;
}
