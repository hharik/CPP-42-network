/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:59:24 by hharik            #+#    #+#             */
/*   Updated: 2022/07/28 15:22:56 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serialization.hpp"

int main()
{
	Data beforedata;
	uintptr_t	ip;
	Data *afterData;

	beforedata.n = 21;
	beforedata.c = 'F';
	beforedata.f = 10.2;

	std::cout << "##### before Data #####" <<std::endl;
	std::cout << "Adress of the Before DAta : " << &beforedata << std::endl;
	std::cout << "Before Data n = " << beforedata.n << std::endl;
	std::cout << "Before Data c = " << beforedata.c << std::endl;
	std::cout << "Before Data f = " << beforedata.f << std::endl;
	ip = serialize(&beforedata);
	afterData = desirialize(ip);
	std::cout << "##### After Data #####" <<std::endl;	
	std::cout << "Adress of the After DAta : " << afterData << std::endl;
	std::cout << "After Data n = " << afterData->n << std::endl;
	std::cout << "After Data c = " << afterData->c << std::endl;
	std::cout << "After Data f = "  <<  afterData->f << std::endl;
}