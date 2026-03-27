/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:56:01 by wshee             #+#    #+#             */
/*   Updated: 2026/03/27 14:04:14 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = copy;
}

Intern &Intern::operator=(const Intern &)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	return(*this);
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor called" << std::endl;
}

// AForm* makeForm(const std::string formName, const std::string target)
// {
// 	std::cout << "Intern creates " << formName << std::endl;
// 	return ();
// }
