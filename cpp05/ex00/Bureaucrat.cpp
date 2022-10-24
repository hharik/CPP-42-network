/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:07:12 by hharik            #+#    #+#             */
/*   Updated: 2022/07/23 11:33:19 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = other;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &other)
{
	std::cout << "Bureaucrat assigment operator called" << std::endl;
	this->grade = other.grade;
	return (*this);
}

int 	Bureaucrat::GetGrade(void) const
{
	return (this->grade);
}
std::string Bureaucrat::GetName(void) const
{
	return (this->name);
}

void	Bureaucrat::increment(void)
{
	if ((this->grade - 1) < 1)
		throw GradeTooHighException();
	this->grade--;
}

void 	Bureaucrat::decrement(void)
{
	if ((this->grade + 1) > 150)
		throw GradeTooLowException();
	this->grade++;
}
const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Grade is too high");
}
const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
	return ("Grade is too Low");
}
std::ostream	&operator << (std::ostream &out, const Bureaucrat &other)
{
	out << other.GetName() << ", Bureaucrat grade " << other.GetGrade() << std::endl;
	return (out);
}