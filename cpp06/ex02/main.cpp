/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:34:00 by hharik            #+#    #+#             */
/*   Updated: 2022/07/30 11:11:32 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand(time(NULL));
	int randnmb = (rand() % 3) + 1;
	switch (randnmb)
	{
		case 1:
			std::cout << "Returning new instance on A" << std::endl;
			return (new A());
		case 2:
			std::cout << "Returning new instance of B " << std::endl;
			return (new B());
		case 3:
			std::cout << "Returning new instance of C" << std::endl;
			return (new C());
	}
	return NULL;
}

void	identify(Base *p)
{
	//dynamic_cast- returns nullptr if it fails to cast
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "The data Type of the given object is A" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "The data Type of the given object is B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "The data Type of the given object is C" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	try
	{
		A &test = dynamic_cast<A&> (p);
		(void)test;
		std::cout << "The data Type of the given object is A" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		B &test = dynamic_cast<B&> (p);
		(void)test;
		std::cout << "The data Type of the given object is B" << std::endl;
	}
	catch(const std::exception& e){}
	try
	{
		C &test = dynamic_cast<C&> (p);
		(void)test;
		std::cout << "The data Type of the given object is C" << std::endl;
	}
	catch(const std::exception& e){}		
}
int main()
{
	Base *test = generate();
	identify(test);
	identify(test);	
}