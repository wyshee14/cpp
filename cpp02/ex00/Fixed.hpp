/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:07:10 by wshee             #+#    #+#             */
/*   Updated: 2025/11/08 20:23:47 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		std::string	_name;
		int			_age;

	public:
		const std::string &getName() const {
			return (_name);
		}
		int getAge() const {
			return (_age);
		}
		Fixed(const std::string &name, int age) : _name(name), _age(age) {
        	std::cout << "Parameterized Constructor Called!" << std::endl;
    	}
		Fixed &operator=(const Fixed &other)
		{
			if (this != &other)
			{
				_name = other._name;
				_age = other._age;
			}
			std::cout << "Human Assignment Operator Called!" << std::endl;
			return(*this);
		}
};

# endif
