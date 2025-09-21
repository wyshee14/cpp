/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:24:31 by wshee             #+#    #+#             */
/*   Updated: 2025/09/21 16:38:47 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook myPhoneBook;

	while(1)
	{
		std::cout << "Enter your command: ";
		// use getline() to get input until delimiter (\n)
		// cin is delimited by space, any character after space is consider as new input
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "ADD")
		{
			// for (int i = 0; i< 8; i++)
			myPhoneBook.set_contact();
		}
		else if (input == "SEARCH")
			myPhoneBook.get_contact();
		else if (input == "EXIT")
			return (1);
		else
			std::cout << "Please enter a valid command: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
}
