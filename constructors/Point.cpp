//
// Created by andrzej on 03.12.23.
//

#include "Point.h"

Point::Point(const Point &point)
{
    this->_x = point._x;
    this->_y = point._y;
    this->_cxx = point._cxx;
    this->_name = "";
}
