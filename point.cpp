/*
* @File:    point.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-30 13:06:54
* @Summary: Definition of class Point
*
* @Last Modified by:   d0m G
* @Last Modified time: 2020-10-01 22:29:25
*/

#include <string>
#include <cmath>
#include "point.h"

namespace geometry {

    Point::Point() : _x(0.0), _y(0.0) {}
    Point::Point(double x, double y) : _x(x), _y(y) {}

    double Point::x() const {
        return _x;
    }
    double Point::y() const {
        return _y;
    }
    void Point::updateX(double x) {
        _x = x;
    }
    void Point::updateY(double y) {
        _y = y;
    }
    void Point::update(double x, double y) {
        updateX(x);
        updateY(y);
    }
    void Point::move(double dx, double dy) {
        update(_x+dx,_y+dy);
    }

    double Point::distance(Point p) {
        double dx = x() - p.x();
        double dy = y() - p.y();
        return sqrt(dx*dx + dy*dy);
    }

    std::string Point::toString(std::string description) const {
        std::string str;
        if (description != "") {
            str = description + " (" + std::to_string(_x) + "," + std::to_string(_y) + ")";
        }
        else {
            str = "(" + std::to_string(_x) + "," + std::to_string(_y) + ")";
        }
        return str;
     }

     void Point::reset() {
        updateX(0);
        updateY(0);
     }

     Point Point::symmetric() {
        return Point(-x(), -y());
     }
} // geometry