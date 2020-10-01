/*
* @File:    app-main.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-09-30 13:25:42
* @Summary: test Point class
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-09-30 13:44:30
*/

#include <iostream>
#include "point.h"

using geometry::Point;

int main(int argc, char const *argv[])
{
    /* code */
    geometry::Point a;
    std::cout << a.toString() << std::endl;
    geometry::Point b(4, 5);
    std::cout << b.toString() << std::endl;
    Point c(-3.2, 4.7);
    std::cout << c.toString() << std::endl;
    c.update(7, 9);
    std::cout << c.toString("c") << std::endl;
    c.move(0.2, -0.5);
    std::cout << c.toString("c") << std::endl;
    c.update(6, 0);
    std::cout << c.toString("c") << std::endl;

    std::cout << "distance = " << c.distance(b) << std::endl;

    return 0;
}