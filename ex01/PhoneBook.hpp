#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	//assessible inside of class
	Contact contacts[8];
	int index;

	//accesss specifier: assessible outside of class
	public:
		//getter
		//setter
		void	set_contact();
		void	get_contact();
		std::string prompt_input(std::string prompt);
		PhoneBook();
};

#endif
