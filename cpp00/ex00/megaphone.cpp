/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:50:43 by wshee             #+#    #+#             */
/*   Updated: 2025/10/11 17:50:45 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

int main(int ac, char **av)
{
	// string is a class
	std::string msg = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (ac < 2)
	{
		std::cout << msg << std::endl;
		return(0);
	}
	for (int i = 1; i < ac; i++)
		for (int j = 0; (av[i][j]); j++)
			std::cout << (char)std::toupper(av[i][j]);
	std::cout << std::endl;
	return 0;
}
