/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:13:05 by hharik            #+#    #+#             */
/*   Updated: 2022/07/18 14:36:31 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0) , y(0)
{
	std::cout << "Default Point Constractor Called" << std::endl;
}
Point::Point(const Point &other) : x(other.x), y(other.y)
{
	std::cout << "Copy Constractor Point" << std::endl;
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
	std::cout << "Point Constractor Called" << std::endl;
}

Point::~Point(void)
{
	std::cout << "Point Destructor called" << std::endl;
}

float	area_of_triangle(float a_x, float a_y, float b_x, float b_y, float c_x, float c_y)
{
	//area is always positive
	return (std::abs(0.5 * (a_x * (b_y - c_y) + b_x * (c_y - a_y) + c_x * (a_y - b_y))));
}

float	Point::get_x(void) const
{
	return (this->x.toFloat());
}

float	Point::get_y(void) const
{
	return (this->y.toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = area_of_triangle(a.get_x(), a.get_y(), b.get_x(), b.get_y(), c.get_x(), c.get_y());
	float A1 = area_of_triangle(a.get_x(), a.get_y(), b.get_x(), b.get_y(), point.get_x(), point.get_y());
	float A2 = area_of_triangle(a.get_x(), a.get_y(), point.get_x(), point.get_y(), c.get_x(), c.get_y());
	float A3 = area_of_triangle(b.get_x(), b.get_y(), point.get_x(), point.get_y(), c.get_x(), c.get_y());
	//return (true);
	if (A == (A1 + A2 + A3))
		return (true);
	return (false);
}