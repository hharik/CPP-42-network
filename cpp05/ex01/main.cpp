/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:32:52 by hharik            #+#    #+#             */
/*   Updated: 2022/07/27 09:49:35 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Form form("war9a", -1, 50);
		Bureaucrat a("hamid", 20);
		a.decrement();
		std::cout << "##### SIGNING #####" << std::endl;
		a.signForm(form);
		std::cout << a;
	}
	catch(std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form("chahada tibiya", 5, 140);
		Bureaucrat p("rick", 5);
		p.increment();
		std::cout << "##### SIGNING #####" << std::endl;
		p.signForm(form);
		std::cout << p;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form form("war9a dyal l mtihan", 20, 120);
		Bureaucrat a("morty", 1);
		a.decrement();
		std::cout << "##### SIGNING #####" << std::endl;
		a.signForm(form);
		std::cout << a;
		
	}
	catch(std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}

}