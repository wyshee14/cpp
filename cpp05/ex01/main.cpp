/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:56:32 by wshee             #+#    #+#             */
/*   Updated: 2026/03/27 13:56:33 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
	std::cout << GREEN << "-----TEST FOR OCF-----" << RESET << std::endl;
	try
	{
		Form defaultForm("defaultForm", 5, 10);
		std::cout << defaultForm << std::endl;
		Form copyForm(defaultForm);
		std::cout << copyForm << std::endl;
		defaultForm = copyForm;
		std::cout << defaultForm << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "-----TEST FOR GRADE OUT OF BOUND-----" << RESET << std::endl;
	try
	{
		Form a("TAX FORM A", 150, 150);
		std::cout << a << std::endl;
		Form b("TAX FORM B", 1, 0);
		std::cout << b << std::endl;
		Form c("TAX FORM C", 9, 200);
		std::cout << c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "-----TEST FOR GRADE TO SIGN SUCCESS-----" << RESET << std::endl;
	try
	{
		// Test higher rank
		Bureaucrat b1("B1", 5);
		std::cout << b1 << std::endl;
		Form d("TAX FORM D", 10, 10);
		std::cout << d << std::endl;
		d.signForm(b1);
		std::cout << d << std::endl;
		// Test same rank
		Bureaucrat b3("B3", 150);
		std::cout << b3 << std::endl;
		Form f("TAX FORM F", 150, 10);
		std::cout << f << std::endl;
		f.signForm(b3);
		std::cout << f << std::endl;
		f.signForm(b1);
		std::cout << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "-----TEST FOR GRADE TO SIGN FAILED-----" << RESET << std::endl;
	try
	{
		// Test lower rank
		Bureaucrat b2("B2", 20);
		std::cout << b2 << std::endl;
		Form e("TAX FORM E", 10, 10);
		std::cout << e << std::endl;
		e.signForm(b2);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
}
