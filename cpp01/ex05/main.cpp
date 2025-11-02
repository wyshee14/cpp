/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:21:47 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 16:21:47 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main()
{
	// Create and instance of class Harl
	Harl instance;

	// Function pointer to point to the member
	// return_type (ClassName::*pointer_name)(argument_types) = &ClassName::member_function;
	// take the address of the member attributes
	void (Harl::*f)( std::string );
	// does not define which instance yet
	f = &Harl::complain;
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		std::cout << "[" << level[i] << "]" << std::endl;
		// ptr dereference the func ptr to call the member function of the obj
		(instance.*f)(level[i]);
	}

	/*Another approach*/
	// Pointer stores the address of instance
	Harl *instancep = &instance;
	// Dereference the instance to call the member fucntion
	(instancep->*f)("zzzzz");

	return 0;
}

// Example of accessing and modifying member variable using pointer to member
// int Harl::*p = NULL;
// p = &Harl::x;
// std::cout << "Value of x: " << instance.x <<std::endl;
// instance.*p = 20;
// std::cout << "Value of x: " << instance.x <<std::endl;
// instancep->*p = 42;
// std::cout << "Value of x: " << instance.x <<std::endl;

//TODO: add test for each level
// # include <sstream>     //use ostringstream, write into string instead of console
// # include <cassert>     //provide assert() macro
// Expected output
// const std::string expectedDebug = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
// const std::string expectedInfo = "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n";
// const std::string expectedWarning = "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
// const std::string expectedError = "This is unacceptable! I want to speak to the manager now.\n";

// std::cout << "Tesing with assetions: " << std::endl;
// std::ostringstream out; // stores output in memory instead printing out in console
// std::streambuf* old_cout = std::cout.rdbuf(out.rdbuf()); // Redirect cout to write into out

// std::string expected[4] = {expectedDebug, expectedInfo, expectedWarning, expectedError};
// std::string level[4] = {"debug", "info", "warning", "error"};
// for (int i = 0; i < 4; i++)
// {
// 	instance.complain(level[i]);
// 	// std::cout.rdbuf(old_cout);
// 	// std::cout << "Expected: [" << expectedDebug << "]\n";
// 	// std::cout << "out: " << out.str();
// 	// assertion failed if return 0
// 	assert(out.str() == expected[i]); // out.str()Get captured output as a string
// 	out.str(""); //Clear buffer
// 	// std::cout.rdbuf(out.rdbuf());

// 	// restore cout before redirection
// 	std::cout.rdbuf(old_cout);
// }
// std::cout << "All tests passed" << std::endl;
