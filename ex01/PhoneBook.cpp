/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:24:19 by wshee             #+#    #+#             */
/*   Updated: 2025/09/21 17:11:17 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::set_contact()
{
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;

	std::cout << "First name: ";
	std::getline(std::cin, first);
	std::cout << "Last name: ";
	std::getline(std::cin, last);
	std::cout << "Nickname: ";
	std::getline(std::cin, nick);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone);
	std::cout << "Dark Secret: ";
	std::getline(std::cin, secret);
	int i = index % 8;
	//if index is more than 8 , reset it back to 0
	contacts[i].add_contact(first, last, nick, phone, secret);
	index++;
}

void	PhoneBook::get_contact()
{
	int i;
	std::string firstname = contacts[0].search_contact();
	// std::cout << "firstname: " << firstname << std::endl;
	if (index > 8)
		i = 8;
	else
		i = index;
	for (int j = 0; j < i; j++)
		std::cout << "firstname: " << contacts[j].search_contact() << std::endl;
}
