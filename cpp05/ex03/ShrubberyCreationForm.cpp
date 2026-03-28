/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:33:05 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 19:25:22 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Parameterized Constructor called" << std::endl;
}

// name must be initialized directly as it is const (immutable) in when creating the object
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), _target(copy._target)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	std::cout << "ShrubberyCreationForm Copy Assignment Operator called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Destructor called" << std::endl;
}

const std::string& ShrubberyCreationForm::getTarget() const
{
    return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	this->checkExecution(executor);
	std::cout << "Executing Shrubbery Creation" << std::endl;
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


