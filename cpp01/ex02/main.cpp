/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:31:34 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:31:34 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";       // Variable declaration

	// Prints the memory address of the string variable
	std::cout << "Memory address of str: " << &str <<std::endl;
	std::cout << "Value of str: " << str << std::endl;

	// Pointer(*) store the memory address as its value
	// & operator refers to the memory address of a variable
	std::string* stringPTR = &str;      // Pointer decalaration
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	// Dereference: Output the value of str with pointer(*)
	// By accessing the memory address of str
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	// Prints the memory address that stores the memory address of str (different value)
	// std::cout << "Memory address of stringPTR: " << &stringPTR << std::endl;
	// Change the value of the pointer
	// *stringPTR = "Value is changed";
	// std::cout << *stringPTR << std::endl;
	// std::cout << str << std::endl;

	// A reference variable is an alias (another name) for an exisitng variable
	// Both str and stringREF refer to the same memory location and same value
	std::string &stringREF = str;       //Reference declaration
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	// This will change the value of str too
	// stringREF = "I AM NOT BRAIN";
	std::cout << "Value pointed to by stringREF: " << stringREF <<std::endl;
}

// & - Reference operator
// * - Dereference operator (Not declaration)
// When used in declaration, is a pointer variable
