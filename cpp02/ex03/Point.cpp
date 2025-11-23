/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:56:16 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 15:56:17 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default value must set the value in initializer list once the cone const object constructed
// Directly give the value, because const cannot be modified after that
Point::Point(): _x(0), _y(0)
{
    std::cout << "Point Default constructor" << std::endl;
}

//Parameterized constructor which takes in value and assigned to both Fixed x and y
Point::Point(float const xVal, float const yVal) : _x(xVal), _y(yVal)
{
    std::cout << "Point Parameterized constructor" << std::endl;
}

// call copy constuctor of Fixed
Point::Point(const Point &copy): _x(copy._x), _y(copy._y)
{
    std::cout << "Point Copy Constructor" << std::endl;
}

// return the same object since cannot modify the value of const object
// Points have fixed coordinates once created, no modification
// create a new point if needed
Point &Point::operator=(const Point &other)
{
    (void) other;
    return *this;
}

Point::~Point()
{
    std::cout << "Point Destructor called" << std::endl;
}

Fixed Point::getX( void ) const
{
    return _x;
}

Fixed Point::getY( void ) const
{
    return _y;
}
