/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:24:19 by wshee             #+#    #+#             */
/*   Updated: 2025/10/04 18:39:03 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	total_contact = 0;
}

std::string PhoneBook::promptInput(std::string prompt)
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

void	PhoneBook::setContact()
{
	std::string first = promptInput("First name: ");
	std::string last = promptInput("Last name: ");
	std::string nick = promptInput("Nickname: ");
	std::string phone = promptInput("Phone number: ");
	std::string secret = promptInput("Dark Secret: ");

	//if index is more than 8 , reset it back to 0
	if (index > 8)
		index %= 8;
	contacts[index].addContact(first, last, nick, phone, secret);
	index++;
}

std::string PhoneBook::formatInput(std::string input)
{
	if (input.length() > 10)
	{
		size_t len = 9;
		input.resize(len);
		input.resize(len + 1, '.');
	}
	return(input);
}

void PhoneBook::listAllContact()
{
	total_contact = index;
	if (index > 8)
		total_contact = 8;
	for (int j = 0; j < total_contact; j++)
	{
		std::cout << std::setw(10) << std:: right << j << "|";
		std::cout << std::setw(10) << std:: right << formatInput(contacts[j].getFirstName()) << "|";
		std::cout << std::setw(10) << std:: right << formatInput(contacts[j].getLastName()) << "|";
		std::cout << std::setw(10) << std:: right << formatInput(contacts[j].getNickname()) << "|";
	}
	std::cout << std::endl;
}

void	PhoneBook::getContact()
{
	if (total_contact == 0)
	{
		std::cout << "Phonebook is empty. Please ADD contact first." << std::endl;
		return ;
	}

	// Print header
	std::string header[4] = {"Index", "First Name", "Last Name", "Nickname"};
	for(int i = 0; i < 4; i++)
		std::cout << std::setw(10) << std:: right << header[i] << "|";
	std::cout << "\n";

	//list all contact available
	listAllContact();

	// Display single contact
	std::string input;
	int contact_index;
	while (1)
	{
		std::cout << "Enter an index within (0 - 7) to display contact: ";
		if (!std::getline(std::cin, input))
			exit(1);
		if(!validateInput(input))
		{
			//c_str converts std::string to const char and returns a null terminated string
			contact_index = atoi(input.c_str());
			if (contact_index >= 0 && contact_index <= total_contact)
				break;
		}
	}
	contacts[contact_index].displayContact();
	std::cout << std::endl;
	std::cout << "Press ENTER to continue..." << std::endl;
	std::cin.get();
	std::cout << "Back to main menu" << std::endl;
}

int	PhoneBook::validateInput(const std::string input)
{
	if (input.length() > 1)
		return (1);
	if (input[0] <= '0' && input[0] >= '9')
		return(1);
	return (0);
}
