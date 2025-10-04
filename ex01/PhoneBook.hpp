#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include "Contact.hpp"

class PhoneBook
{
	//assessible inside of class
	Contact contacts[8];
	int index;
	int total_contact;

	//accesss specifier: assessible outside of class
	public:
		void	setContact();
		void	getContact();
		std::string promptInput(std::string prompt);
		int validateInput(const std::string input);
		void listAllContact();
		std::string formatInput(std::string input);
		void searchContact();
		PhoneBook();
};

#endif
