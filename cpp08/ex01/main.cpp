/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2	022/07/31 14:13:05 by hharik            #+#    #+#             */
/*   Updated: 2022/07/31 17:03:25 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
	Span sp = Span(5);
	srand(time(NULL));
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m  #####  \033[0m\n";
		std::cerr << e.what() << '\n';
		std::cout << "\033[1;31m  #####  \033[0m\n";
	}
	std::cout << "> >> "  <<  sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
	{
		std::vector <int> thick(9999);
		for(int i = 0; i < 9999; i++)
			thick[i] = rand();
		Span sp = Span(10000);
		sp.ADD_range(thick.begin(), thick.end());
		//sp.printList();
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m  #####  \033[0m\n";
		std::cerr << e.what() << '\n';
		std::cout << "\033[1;31m  #####  \033[0m\n";
	}
	try
	{
		std::vector <int> thick(10000);
		for(int i = 0; i < 10000; i++)
			thick[i] = rand();
		Span sp = Span(10000);
		sp.ADD_range(thick.begin(), thick.end());
		//sp.printList();
	}
	catch(const std::exception& e)
	{
		std::cout << "\033[1;31m  #####  \033[0m\n";
		std::cerr << e.what() << '\n';
		std::cout << "\033[1;31m  #####  \033[0m\n";
	}
	try
	{
		std::cout << "TESTING Short span" << std::endl;;
		Span sp = Span(1);
		sp.addNumber(2);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}