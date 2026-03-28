/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:56:53 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 19:25:22 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <ctime>

int main()
{
	std::cout << GREEN << "-----TEST FOR OCF-----" << RESET << std::endl;
	try
	{
		ShrubberyCreationForm a("home");
		std::cout << a << std::endl;
		ShrubberyCreationForm copyA(a);
		std::cout << copyA << std::endl;
		a = copyA;
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "-----TEST FOR SUCCESS EXECUTION-----" << RESET << std::endl;
	try
	{
		ShrubberyCreationForm a("home");
		std::cout << a << std::endl;
		Bureaucrat b1("B1", 137);
		std::cout << b1 << std::endl;
		b1.signForm(a);
		b1.executeForm(a);

		// Use current time as seed for random generator
		// Get a different random number each time the program runs
		std::srand(static_cast<unsigned>(std::time(NULL)));
		RobotomyRequestForm rr("Rocky");
		std::cout << rr << std::endl;
		Bureaucrat b2("B2", 45);
		std::cout << b2 << std::endl;
		b2.signForm(rr);
		b2.executeForm(rr);

		PresidentialPardonForm pp("president");
		std::cout << pp << std::endl;
		Bureaucrat b3("B3", 5);
		std::cout << b3 << std::endl;
		b3.signForm(pp);
		b3.executeForm(pp);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "-----TEST FOR FAIL EXECUTION (GRADE TOO LOW)-----" << RESET << std::endl;
	try
	{
		ShrubberyCreationForm a("home");
		std::cout << a << std::endl;
		Bureaucrat b1("B1", 100);
		std::cout << b1 << std::endl;
		b1.signForm(a);
		Bureaucrat b2("B2", 150);
		std::cout << b2 << std::endl;
		b2.executeForm(a);

		RobotomyRequestForm rr("robot");
		std::cout << rr << std::endl;
		Bureaucrat b3("B3", 40);
		std::cout << b3 << std::endl;
		b3.signForm(rr);
		Bureaucrat b4("B4", 150);
		std::cout << b4 << std::endl;
		b4.executeForm(rr);

		PresidentialPardonForm pp("president");
		std::cout << pp << std::endl;
		Bureaucrat b5("B5", 40);
		std::cout << b5 << std::endl;
		b5.signForm(pp);
		Bureaucrat b6("B6", 150);
		std::cout << b6 << std::endl;
		b6.executeForm(pp);

	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "-----TEST FOR FAIL EXECUTION (FORM NOT SIGNED)-----" << RESET << std::endl;
	try
	{
		ShrubberyCreationForm a("home");
		std::cout << a << std::endl;
		Bureaucrat b1("B1", 100);
		std::cout << b1 << std::endl;
		b1.executeForm(a);

		RobotomyRequestForm rr("robot");
		std::cout << rr << std::endl;
		Bureaucrat b2("B2", 100);
		std::cout << b2 << std::endl;
		b2.executeForm(rr);

		PresidentialPardonForm pp("president");
		std::cout << pp << std::endl;
		Bureaucrat b3("B3", 100);
		std::cout << b3 << std::endl;
		b3.executeForm(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

}
