/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:31:29 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:31:29 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define BOLD "\033[1m"

class Zombie
{
	private:
		std::string _name;

	public:
		// Getter
		const std::string& getName( void ) const;
		// Setter
		void setName( std::string name );
		// Member function
		void announce( void );
		// Dummy Constructor
		Zombie();
		//Destructor
		~Zombie();
};

// Free function, can be called without creating an object
Zombie* zombieHorde( int N, std::string name );

#endif
