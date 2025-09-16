#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	//assessible inside of class
	Contact contacts[8];

	//accesss specifier: assessible outside of class
	public:
		//setter
		void add_contact();
		//getter
		void search_contact();
};

#endif
