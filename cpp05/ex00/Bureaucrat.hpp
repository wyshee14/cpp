/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:20:31 by wshee             #+#    #+#             */
/*   Updated: 2026/03/25 18:13:56 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat{
	private:
		std::string	_name;
		int _grade;

	public:
		// OCF
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		// Getters
		const std::string& getName() const;
		const int& getGrade() const;

		// Exception
		// - inherits from class exception
		// - override the function what() to output the custom message
		class gradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Error : Grade too high";
				}
		};
		class gradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Error : Grade too low";
				}
		};

		// Member functions
		void incrementGrade();
		void decrementGrade();
		void checkGrade(int grade);
};

// insertion operator - must be non member function
// if put inside class, compiler throw error where it has 3 parameter
std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif
