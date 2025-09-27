/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:38:21 by wshee             #+#    #+#             */
/*   Updated: 2025/09/27 15:03:39 by wshee            ###   ########.fr       */
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

void Contact::search_contact()
{
	std::cout << std::setw(10) << _firstName << std::endl;
	// std::cout << _firstName;
}
