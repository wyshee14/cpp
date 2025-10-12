/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:38:21 by wshee             #+#    #+#             */
/*   Updated: 2025/10/12 11:39:24 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

// Constructor - to instantiate an object
Contact::Contact() {
	// std::cout << "Contact has been created" << std::endl;
}
// Destructor - to delete an object, deallocate memory of the object
Contact::~Contact(){
	// std::cout << "Contact is destroyed" << std::endl;
}

/* ---Getter--- */
// const std::string& is the return type
// the string cannot be modify
// string& is a reference to the object, without creating a copy
// second const cannot modify the function itself (in object form)
const std::string& Contact::getFirstName() const
{
	return _firstName;
}

const std::string& Contact::getLastName() const
{
	return _lastName;
}

const std::string& Contact::getNickname() const
{
	return _nickname;
}

const std::string& Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

const std::string& Contact::getDarkSecret() const
{
	return _darkSecret;
}

/* ---Setter--- */
void Contact::addContact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
{
	//loop through each of the contact array
	//prompt user for the fields
	//empty input is not allowed
	_firstName = first;
	_lastName = last;
	_nickname = nick;
	_phoneNumber = phone;
	_darkSecret = secret;
}
