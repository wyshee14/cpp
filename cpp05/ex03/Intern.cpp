/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:56:01 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 19:25:22 by wshee            ###   ########.fr       */
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

AForm* Intern::makeForm(const std::string formName, const std::string target)
{
	std::string form[3] = {"ShrubberyCreationForm", "RobotomyReuqestForm", "PresidentialPardonForm"};
	int formNumber = -1;
	for (int i = 0; i < 3; i++)
	{
		if (formName == form[i])
		{
			std::cout << GREEN << "Intern creates " << formName << RESET << std::endl;
			formNumber = i;
		}
	}
	switch(formNumber)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			std::cout << RED << "Form Name provided does not exist." << RESET << std::endl;
	}
	return (NULL);
}
