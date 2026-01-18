/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:57:05 by wshee             #+#    #+#             */
/*   Updated: 2026/01/18 11:38:29 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main()
{
	FragTrap Frag("P1");
	Frag.printCurrentStatus();

	Frag.attack("enemy");
	Frag.printCurrentStatus();

	Frag.highFiveGuys();

	Frag.takeDamage(20);
	Frag.printCurrentStatus();

	Frag.beRepaired(20);
	Frag.printCurrentStatus();
}
