/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:08:49 by hharik            #+#    #+#             */
/*   Updated: 2022/07/18 14:25:53 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
# define POINT_HPP_

#include "Fixed.hpp"
#include <iostream>
#include <cstdlib>
#include <cmath>

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float _x, const float _y);
		Point(const Point &other);
		Point	&operator = (const Point &other);
		~Point();
		float	get_x(void) const;
		float	get_y(void) const;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif