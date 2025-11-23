/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:56:08 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 16:08:19 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

// calculate the area of three points
static float area(Point const &a, Point const &b, Point const &c)
{
    Fixed result = (
        (a.getX() * (b.getY() - c.getY()))
        + (b.getX() * (c.getY() - a.getY()))
        + (c.getX() * (a.getY() - b.getY()))
    ) / Fixed(2);

    // Ensure area is always positive
    // Handles clockwise/counter-clockwise point ordering
    float abs = result.toFloat();
    if (abs < 0)
    {
        abs *= (-1);
    }
    return abs;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a, b, c);
    float A1 = area(a, b, point);
    float A2 = area(a, c, point);
    float A3 = area(b, c, point);

    // A > 0 check if point is on edge or on vertex
    return (A == A1 + A2 + A3) && A1 > 0 && A2 > 0 && A3 > 0;
}

// Triangle ABC with point P inside:

//     A
//    /|\
//   / | \
//  /  P  \
// B-------C

// A = area(ABC)      = main triangle
// A1 = area(PBC)     = bottom subtriangle
// A2 = area(APC)     = right subtriangle
// A3 = area(ABP)     = left subtriangle

// If P is inside: A = A1 + A2 + A3
// If P is outside: A ≠ A1 + A2 + A3
// If P is on edge: one of A1/A2/A3 = 0
