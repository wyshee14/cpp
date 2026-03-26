/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:37:35 by wshee             #+#    #+#             */
/*   Updated: 2026/03/26 17:50:24 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{
	std::cout << GREEN << "-----TEST FOR OCF-----" << RESET << std::endl;
	try
	{
		Bureaucrat defaultBureaucrat("default", 5);
		std::cout << defaultBureaucrat << std::endl;
		Bureaucrat copyBureaucrat(defaultBureaucrat);
		std::cout << copyBureaucrat << std::endl;
		defaultBureaucrat = copyBureaucrat;
		std::cout << defaultBureaucrat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << GREEN << "----- TEST FOR GRADE < 0 -----" << RESET << std::endl;
	try
	{
		Bureaucrat b1("b1", 0);
		std::cout << b1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "----- TEST FOR GRADE > 150 -----" << RESET << std::endl;
	try
	{
		Bureaucrat b2("b2", 200);
		std::cout << b2 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "----- TEST FOR GRADE < 50 -----" << RESET << std::endl;
	try
	{
		Bureaucrat b3("b3", 50);
		std::cout << b3 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "----- TEST FOR INCREMENT -----" << RESET << std::endl;
	try
	{
		Bureaucrat b4("b4", 1);
		std::cout << b4 << std::endl;
		b4.decrementGrade();
		std::cout << b4 << std::endl;
		b4.incrementGrade();
		std::cout << b4 << std::endl;
		b4.incrementGrade();
		std::cout << b4 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "----- TEST FOR DECREMENT -----" << RESET << std::endl;
	try
	{
		Bureaucrat b5("b5", 150);
		std::cout << b5 << std::endl;
		b5.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	return 0;
}
