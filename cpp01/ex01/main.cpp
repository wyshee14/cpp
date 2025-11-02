/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:31:16 by wshee             #+#    #+#             */
/*   Updated: 2025/11/01 15:31:16 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	int size = 5;
	Zombie* arr = zombieHorde(size, "Zombiesssssss");
	if (!arr)
		return 1;
	for (int i = 0; i < size; i++)
	{
		arr[i].announce();
	}
	delete[] arr;
	arr = NULL;

	return 0;
}
