/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:33:02 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 17:52:33 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Parameterized Constructor called" << std::endl;
}

// name must be initialized directly as it is const (immutable) in when creating the object
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	std::cout << "RobotomyRequestForm Copy Assignment Operator called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Destructor called" << std::endl;
}

const std::string& RobotomyRequestForm::getTarget() const
{
    return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	this->checkExecution(executor);
	// std::cout << MAGENTA << "Makes some drilling noises, then informs that " << this->getTarget() << " has been robotomized successfully 50% of the time. Otherwise, it informs that the robotomy failed." << RESET << std::endl;
	std::cout << MAGENTA << "DRILLLLLLLLL" << std::endl;
	// rand generate random numbers
	// modulo 2 will give 50% probability of getting 0 or 1
	if (std::rand() % 2)
	{
		std::cout << this->getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
	}
	else
	{
		std::cout << "Robotomy failed on " << this->getTarget() << std::endl;
	}
}


