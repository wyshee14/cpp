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
        Fixed getX( void ) const;
        Fixed getY( void ) const;

};

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

#endif
