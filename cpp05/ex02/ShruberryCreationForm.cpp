/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:57:02 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 17:27:25 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShruberryCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(const std::string target) : AForm("ShruberryCreationForm", 145, 137), _target(target)
{
	std::cout << "ShruberryCreationForm Parameterized Constructor called" << std::endl;
}

// name must be initialized directly as it is const (immutable) in when creating the object
ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm &copy) : AForm(copy), _target(copy._target)
{
	std::cout << "ShruberryCreationForm Copy Constructor called" << std::endl;
}

ShruberryCreationForm &ShruberryCreationForm::operator=(const ShruberryCreationForm &)
{
	std::cout << "ShruberryCreationForm Copy Assignment Operator called" << std::endl;
	return (*this);
}

ShruberryCreationForm::~ShruberryCreationForm()
{
	std::cout << "ShruberryCreationForm Default Destructor called" << std::endl;
}

const std::string& ShruberryCreationForm::getTarget() const
{
	return _target;
}

void ShruberryCreationForm::execute(Bureaucrat const& executor) const
{
	this->checkExecution(executor);
	std::cout << "Executing Shruberry Creation" << std::endl;
	// std::cout << MAGENTA << "Creates a file " << this->getTarget() << "_shrubbery in the working directory and writes ASCII trees inside it." << RESET << std::endl;
	std::string fileName = getTarget() + "_shrubbery";
	// converts into a const char (c string)
	std::ofstream newFile(fileName.c_str());
	if (!newFile)
	{
		std::cerr << RED << "Error: cannot open file" << fileName << RESET << std::endl;
	}
	newFile << "\n";
	newFile << "    *\n";
	newFile << "   /.\\\n";
	newFile << "  /o..\\\n";
	newFile << "  /..o\\\n";
	newFile << " /.o..o\\\n";
	newFile << " /...o.\\\n";
	newFile << "/..o....\\\n";
	newFile << "^^^[_]^^^\n";
	newFile.close();
}
