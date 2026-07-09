/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:19:50 by wshee             #+#    #+#             */
/*   Updated: 2026/07/09 22:09:45 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <cctype>		// Handle individual character (isdigit(), isprint())
# include <cstring>
# include <climits>		// Handle INT_MIN and INT_MAX
# include <stdlib.h>	// atoi library
# include <limits>		//Handle numeric limits
#include <iomanip>
# include <sstream>

class ScalarConverter {
	private:
		// OCF - put at private to make it non instantiable
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &);
		~ScalarConverter();

	public:
		// Static member function - can be called without creating object
		// only one static member function allowed
		static void convert(const char *arg);
};

#endif
