/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:32:52 by hharik            #+#    #+#             */
/*   Updated: 2022/07/27 09:45:48 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("hamid", 10);
		a.decrement();
		std::cout << a;
		
	}
	catch(std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat p("rick", 0);
		p.increment();
		std::cout << p;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat a("morty", 150);
		a.decrement();
		std::cout << a;
		
	}
	catch(std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
}