/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:41:45 by wshee             #+#    #+#             */
/*   Updated: 2026/03/26 16:32:32 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Parameterized Constructor called" << std::endl;
	checkGrade(grade);
	std::cout << "Object successfully created for " << this->_name << std::endl;
}

// name must be initialized directly as it is const (immutable) in when creating the object
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	checkGrade(this->_grade);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		// cannot change the _name after the object is constructed, must be initialized at copy constructor 
		// this->_name = other.getName();
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
	std::cout << BLUE << "increment grade..." << RESET << std::endl;
	_grade--;
	checkGrade(_grade);
}

void Bureaucrat::decrementGrade()
{
	std::cout << BLUE << "decrement grade..." << RESET << std::endl;
	_grade++;
	checkGrade(_grade);
}

// throw exception if grade is too high/low
// Grade 1 - highest ; Grade 150 - lowest
void Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw gradeTooHighException();
	else if (grade > 150)
		throw gradeTooLowException();
}

// insertion overloading
// return stream by reference to allow chaining of multiple output
// pass both stream and object by reference
std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}
