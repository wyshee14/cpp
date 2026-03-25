/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:41:45 by wshee             #+#    #+#             */
/*   Updated: 2026/03/25 18:15:22 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Parameterized Constructor called" << std::endl;
	checkGrade(grade);
	std::cout << "Object successfully created for " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_grade = other.getGrade();
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default Destructor called" << std::endl;
}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

const int& Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	_grade--;
	checkGrade(_grade);
}

void Bureaucrat::decrementGrade()
{
	_grade++;
	checkGrade(_grade);
}

void Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw gradeTooLowException();
	else if (grade > 150)
		throw gradeTooHighException();
}

// insertion overloading
// return stream by reference to allow chaining of multiple output
// pass both stream and object by reference
std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}
