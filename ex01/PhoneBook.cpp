/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:24:19 by wshee             #+#    #+#             */
/*   Updated: 2025/09/27 15:19:47 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

std::string PhoneBook::prompt_input(std::string prompt)
{
	std::string key;

	while (key.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, key);
		if(std::cin.eof())
			break ;
		if (key.empty())
			std::cout << "This field cannot be empty."<< std::endl;
	}
	return key;
}

void	PhoneBook::set_contact()
{
	std::string first = prompt_input("First name: ");
	std::string last = prompt_input("Last name: ");
	std::string nick = prompt_input("Nickname: ");
	std::string phone = prompt_input("Phone number: ");
	std::string secret = prompt_input("Dark Secret: ");

	//if index is more than 8 , reset it back to 0
	if (index > 8)
		index %= 8;
	contacts[index].add_contact(first, last, nick, phone, secret);
	index++;
}

void	PhoneBook::get_contact()
{
	int contact_number = index;
	if (index > 8)
		contact_number = 8;
	for (int j = 0; j < contact_number; j++)
	{
		std::cout << "firstname: ";
		contacts[j].search_contact();
	}
		// std::cout << std::endl;
}
