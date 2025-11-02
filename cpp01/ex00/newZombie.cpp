/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:30:56 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:30:56 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

// Dynamic memory allocation
// When to use new? (heap memory)
// - when u dont know how much memory will use (user input)
// - When u want full manual control over memory
Zombie* newZombie( std::string name )
{
	// new Zombie creates a memory space for Zombie
	Zombie* ptr = new Zombie(name);
	// returns a pointer of the new object
	return ptr;
}
