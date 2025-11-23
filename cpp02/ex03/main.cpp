/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:07:17 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 12:32:43 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main()
{
	Point a;
	Point b(20, 0);
	Point c(10, 30);
	Point p(10, 15);

	if (bsp(a, b, c, p))
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;

	return 0;
}
