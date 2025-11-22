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
        // get_x;
        // get_y

};

#endif
