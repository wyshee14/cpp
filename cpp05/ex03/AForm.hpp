/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:33:14 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 16:33:15 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

// Forward declaration
class Bureaucrat;

// Abstract class
class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;

    public:
        // OCF
        AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
        AForm(const AForm &copy);
        AForm &operator=(const AForm &other);
        virtual ~AForm();

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
        class formNotSignedException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form Error : Form not signed. Please get signature to proceed with execution.";
				}
		};

        // Member Function
        void checkGrade(int grade);
        void beSigned(const Bureaucrat &bureaucrat);

        // Pure virtual function
        virtual void execute(Bureaucrat const& executor) const = 0;
        void checkExecution(Bureaucrat const& executor) const;
};

std::ostream &operator<<(std::ostream &out, const AForm &obj);

#endif
