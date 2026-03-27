#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"

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
		// AForm* makeForm(const std::string formName, const std::string target);
};

#endif
