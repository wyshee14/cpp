/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:19:50 by wshee             #+#    #+#             */
/*   Updated: 2026/04/19 17:28:00 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <cctype>
# include <cstring>

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
