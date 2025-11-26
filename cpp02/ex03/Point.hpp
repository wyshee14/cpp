/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:56:20 by wshee             #+#    #+#             */
/*   Updated: 2025/11/23 21:12:45 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

#ifndef POINT_H
# define POINT_H

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        // Default constructor
        Point();
        Point(float const x, float const y);
        Point(const Point &copy);
        Point &operator=(const Point &other);
        ~Point();

        //getter
        Fixed const &getX( void ) const;
        Fixed const &getY( void ) const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
