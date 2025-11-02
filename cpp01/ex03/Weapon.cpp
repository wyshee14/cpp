/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:31:50 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:31:50 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon( std::string type):_type(type)
{
	std::cout << "Weapon Constructor Called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor Called" << std::endl;
}

// const std::string& is the return type of a const reference to std::string
// Returning a reference to the actual private attribute (not a copy)
// if std::string& - can modify the reference
// if std::string - returns a copy of the string
// const(start) - cannot modify the string through this reference (read only accesss)
// const(end) - ensures the function does not modify the object and its member variable
// allows the function to be called on const objects
const std::string& Weapon::getType( void ) const
{
	return _type;
}

void Weapon::setType( std::string type )
{
	_type = type;
}
