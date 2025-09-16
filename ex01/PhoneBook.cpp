/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:24:19 by wshee             #+#    #+#             */
/*   Updated: 2025/09/16 18:32:55 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

void add_contact()
{
	//loop through each of the
	//prompt user for the fields
	//empty input is not allowed
	std::cout << "First Name: ";
	std::getline(std::cin, Contact.firstName);
}
