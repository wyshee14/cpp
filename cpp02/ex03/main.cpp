/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:07:17 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 16:09:50 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main()
{
	Point a;
	Point b(20, 0);
	Point c(10, 30);

	Point p(10, 15);
	Point p1(50,50);

	if (bsp(a, b, c, p))
		std::cout << "Inside triangle" << std::endl;
	else
		std::cout << "Outside triangle" << std::endl;

	return 0;
}
