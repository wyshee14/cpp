#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkSecret;

	public:
		//setter
		void add_contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
		//getter
		void search_contact();
		Contact();
		// const std::string& search_contact() const; (look up for reference and pointer c++)
		// Contact(std::string str1, std::string str2, std::string str3, std::string str4, std::string str5)
		// Contact(std::string firstName);
};

#endif
