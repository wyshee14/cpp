# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main()
{
	std::cout << GREEN << "-----TEST FOR OCF-----" << RESET << std::endl;
	try
	{
		Intern a;
		Intern b(a);
		b = a;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	// std::cout << GREEN << "-----TEST FOR SUCCESS EXECUTION-----" << RESET << std::endl;
	// try
	// {
	// 	ShruberryCreationForm a("home");
	// 	std::cout << a << std::endl;
	// 	Bureaucrat b1("B1", 137);
	// 	std::cout << b1 << std::endl;
	// 	a.signForm(b1);
	// 	b1.executeForm(a);

	// 	RobotomyRequestForm rr("robot");
	// 	std::cout << rr << std::endl;
	// 	Bureaucrat b2("B2", 45);
	// 	std::cout << b2 << std::endl;
	// 	rr.signForm(b2);
	// 	b2.executeForm(rr);

	// 	PresidentialPardonForm pp("president");
	// 	std::cout << pp << std::endl;
	// 	Bureaucrat b3("B3", 5);
	// 	std::cout << b3 << std::endl;
	// 	pp.signForm(b3);
	// 	b3.executeForm(pp);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

	// std::cout << GREEN << "-----TEST FOR FAIL EXECUTION (GRADE TOO LOW)-----" << RESET << std::endl;
	// try
	// {
	// 	ShruberryCreationForm a("home");
	// 	std::cout << a << std::endl;
	// 	Bureaucrat b1("B1", 100);
	// 	std::cout << b1 << std::endl;
	// 	a.signForm(b1);
	// 	Bureaucrat b2("B2", 150);
	// 	std::cout << b2 << std::endl;
	// 	b2.executeForm(a);

	// 	RobotomyRequestForm rr("robot");
	// 	std::cout << rr << std::endl;
	// 	Bureaucrat b3("B3", 40);
	// 	std::cout << b3 << std::endl;
	// 	rr.signForm(b3);
	// 	Bureaucrat b4("B4", 150);
	// 	std::cout << b4 << std::endl;
	// 	b4.executeForm(rr);

	// 	PresidentialPardonForm pp("president");
	// 	std::cout << pp << std::endl;
	// 	Bureaucrat b5("B5", 40);
	// 	std::cout << b5 << std::endl;
	// 	pp.signForm(b5);
	// 	Bureaucrat b6("B6", 150);
	// 	std::cout << b6 << std::endl;
	// 	b6.executeForm(pp);

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

	// std::cout << GREEN << "-----TEST FOR FAIL EXECUTION (FORM NOT SIGNED)-----" << RESET << std::endl;
	// try
	// {
	// 	ShruberryCreationForm a("home");
	// 	std::cout << a << std::endl;
	// 	Bureaucrat b1("B1", 100);
	// 	std::cout << b1 << std::endl;
	// 	b1.executeForm(a);

	// 	RobotomyRequestForm rr("robot");
	// 	std::cout << rr << std::endl;
	// 	Bureaucrat b2("B2", 100);
	// 	std::cout << b2 << std::endl;
	// 	b2.executeForm(rr);

	// 	PresidentialPardonForm pp("president");
	// 	std::cout << pp << std::endl;
	// 	Bureaucrat b3("B3", 100);
	// 	std::cout << b3 << std::endl;
	// 	b3.executeForm(a);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

}
