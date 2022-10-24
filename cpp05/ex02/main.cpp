/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:32:52 by hharik            #+#    #+#             */
/*   Updated: 2022/07/27 10:05:18 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << "##########################ShrubberyCreationForm######################" << std::endl;
	try
	{
		ShrubberyCreationForm test("dar");
		std::cout << test;
		Bureaucrat a("tbib", 10);
		std::cout << a;
		std::cout << "##### SIGNING #####" << std::endl;
		a.signForm(test);
		test.execute(a);
		std::cout << test ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		ShrubberyCreationForm test("dar");
		std::cout << test;
		Bureaucrat a("tbib", 155);
		std::cout << a;
		std::cout << "##### SIGNING #####" << std::endl;
		a.signForm(test);
		test.execute(a);
		std::cout << test ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "##################################TEST TWO######################" << std::endl;
	try
	{
		RobotomyRequestForm test("dar");
		std::cout << test;
		Bureaucrat a("tbib", 10);
		std::cout << a;
		std::cout << "##### SIGNING #####" << std::endl;
		a.signForm(test);
		test.execute(a);
		std::cout << test ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm test("dar");
		std::cout << test;
		Bureaucrat a("tbib", 200);
		std::cout << a;
		std::cout << "##### SIGNING #####" << std::endl;
		a.signForm(test);
		a.executeForm(test);
		std::cout << test ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "##################################TEST THREE######################" << std::endl;
	try
	{
		PresidentialPardonForm test("war9a i3tidar 3la darb ou ljar7");
		std::cout << test;
		Bureaucrat a("wakil l malik", 1);
		std::cout << a;
		std::cout << "########################## SIGNING ###################" << std::endl;
		a.signForm(test);
		a.executeForm(test);
		std::cout << test;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}