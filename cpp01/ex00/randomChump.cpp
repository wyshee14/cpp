/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:31:00 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:31:00 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

// Create an object at stack memory
// Object no longer exist after quit this function
void randomChump(std::string name)
{
	// Create a new object of class Zombie
	Zombie randomZombie(name);

	// Object can call the member function within this function
	randomZombie.announce();
}
