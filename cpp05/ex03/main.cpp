/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:32:52 by hharik            #+#    #+#             */
/*   Updated: 2022/07/27 10:10:15 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "##########################ShrubberyCreationForm######################" << std::endl;
	try
	{
		//ShrubberyCreationForm test("dar");
		Intern	somerandomIntern;
		Form *rrf;
		rrf = somerandomIntern.MakeForm("shrubbery creation", "home");		
		if (rrf != NULL)
		{
			std::cout << "***************** " <<  *rrf;
			Bureaucrat a("m9adam", 10);
			std::cout << a;
			a.signForm(*rrf);
			rrf->execute(a);
			std::cout << " **************** " << *rrf ;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "############# TEST TWO##################" <<std::endl;
	try
	{
		Intern	somerandomIntern;
		Form *rrf;
		rrf = somerandomIntern.MakeForm("shrubbery creation", "home");	
		if (rrf != NULL)
		{
			std::cout << "*************  "<<  *rrf;
			Bureaucrat a("9ayd", 1);
			std::cout << a;
			a.signForm(*rrf);
			a.executeForm(*rrf);
			std::cout << "********** "<< *rrf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "################################## RobotomyRequestForm ######################" << std::endl;
	try
	{
		Intern somerndinter;
		Form *rrf;
		rrf = somerndinter.MakeForm("robotomy request", "Dar");
		if (rrf != NULL)
		{
			std::cout <<"******* "  <<  *rrf;
			Bureaucrat a("tbib", 81);
			std::cout << a;
			a.signForm(*rrf);
			rrf->execute(a);
			std::cout << "******* " << *rrf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "############# TEST TWO##################" <<std::endl;
	try
	{
		Intern somerndinter;
		Form *rrf;
		rrf = somerndinter.MakeForm("robotomy request", "Dar");
		if (rrf != NULL)
		{
			std::cout <<"******* "  <<  *rrf;
			Bureaucrat a("tbib", 159);
			std::cout << a;
			a.signForm(*rrf);
			rrf->execute(a);
			std::cout << "******* " << *rrf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "################################## PresidentialRequestForm ######################" << std::endl;
	try
	{
		Intern somerndinter;
		Form *rrf;
		rrf = somerndinter.MakeForm("presidential request", "sakwila");
		if (rrf != NULL)
		{
			std::cout <<"******* "  <<  *rrf;
			Bureaucrat a("tbib", 2);
			std::cout << a;
			a.signForm(*rrf);
			rrf->execute(a);
			std::cout << "********** " << *rrf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "############# TEST TWO##################" <<std::endl;
	try
	{
		Intern somerndinter;
		Form *rrf;
		rrf = somerndinter.MakeForm("presidential request", "sakwila");
		if (rrf != NULL)
		{	
			std::cout <<"******* "  <<  *rrf;
			Bureaucrat a("tbib", 160);
			std::cout << a;
			a.signForm(*rrf);
			a.executeForm(*rrf);
			std::cout << "********** " << *rrf;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// system("leaks Inter");
}
