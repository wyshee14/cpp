/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:31:48 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:31:48 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main()
{
	// {
	//     Weapon club = Weapon("crude spiked club");
	//     HumanA bob("Bob", club);
	//     bob.attack();
	//     club.setType("some other type of club");
	//     bob.attack();
	// }
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
return 0;
}
