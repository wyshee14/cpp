/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 16:33:21 by wshee             #+#    #+#             */
/*   Updated: 2026/03/28 16:33:22 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShruberryCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

// Forward declaration
class AForm;

class Intern {
	public:
		// OCF
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &other);
		~Intern();

		// Memeber function
		AForm* makeForm(const std::string formName, const std::string target);
};

#endif
