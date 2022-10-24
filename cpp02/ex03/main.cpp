/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:07:13 by hharik            #+#    #+#             */
/*   Updated: 2022/07/18 15:17:02 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	if (bsp(Point(-2, 1), Point(3, 2), Point(1, 5), Point(-1, 1.2)) == false)
		std::cout << "Triangle 1 : not inside" << std::endl;
	else
		std::cout << "Triangle 1 : inside" << std::endl;
}