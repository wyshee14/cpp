/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:38:21 by wshee             #+#    #+#             */
/*   Updated: 2025/09/21 16:53:33 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{
	// _firstName = "default";
	// _lastName = "default last";
}

// Contact::Contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
// {
// 	_firstName = first;

// }

void Contact::add_contact(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
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

const std::string& Contact::search_contact() const
{
	return _firstName;
}
