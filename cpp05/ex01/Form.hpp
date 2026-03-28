/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 13:56:38 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 16:26:52 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

// Forward declaration
class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;

    public:
        // OCF
        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        Form(const Form &copy);
        Form &operator=(const Form &other);
        ~Form();

        // Getter
        const std::string& getName() const;
        const bool& getStatus() const;
        const int& getGradeToSign() const;
        const int& getGradeToExecute() const;

        // Exception
		class gradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form Error : Grade too high";
				}
		};
		class gradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form Error : Grade too low";
				}
		};

        // Member Function
        void checkGrade(int grade);
        void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &obj);

#endif
