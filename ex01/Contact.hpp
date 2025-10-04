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
		void addContact(std::string first, std::string last, std::string nick, std::string phone, std::string secret);
		//getter
		const std::string& getFirstName() const;
		const std::string& getLastName() const;
		const std::string& getNickname() const;
		const std::string& getPhoneNumber() const;
		const std::string& getDarkSecret() const;
		Contact();
};

#endif
