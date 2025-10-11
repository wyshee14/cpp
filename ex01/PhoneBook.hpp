/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:50:38 by wshee             #+#    #+#             */
/*   Updated: 2025/10/11 17:50:40 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include "Contact.hpp"

class PhoneBook
{
	//assessible inside of class
	Contact contacts[8];
	int index;
	int total_contact;

	//accesss specifier: assessible outside of class
	public:
		void	setContact();
		void	getContact();
		std::string promptInput(std::string prompt);
		int validateInput(const std::string input);
		void listAllContact();
		std::string formatInput(std::string input);
		void searchContact();
		PhoneBook();
};

#endif
