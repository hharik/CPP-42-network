/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:54:10 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 17:28:12 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
//simple
Form::Form(std::string _name , int _grade_to_sign, int _grade_to_exec) : name(_name), sign(false), grade_to_sign(_grade_to_sign), grade_to_exec(_grade_to_exec)
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form(void) : name("Null"),  sign(false) ,grade_to_sign(0), grade_to_exec(0)
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form &other) : name(other.name) , sign(other.sign) , grade_to_sign(other.grade_to_sign) , grade_to_exec(other.grade_to_exec)
{
	std::cout << "Form Copy Constructor called" << std::endl;
	*this = other;
}

Form	&Form::operator = (const Form &other)
{
	std::cout << "Form Assigment operator called" << std::endl;
	this->sign = other.sign;
	return (*this);
}

//getters and setters

std::string	Form::GetName(void) const
{
	return (this->name);
}

bool	Form::GetSign(void) const
{
	return (this->sign);
}

int 	Form::GetGradeToExec(void) const
{
	return (this->grade_to_exec);
}

int		Form::GetGradeToSign(void) const
{
	return (this->grade_to_sign);
}
//execptions

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Grade is Too High");
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
	return ("Grade is Too Low");
}

//Besigned
void	Form::beSigned(const Bureaucrat &bure)
{
	if (bure.GetGrade() > this->GetGradeToSign())
		throw GradeTooLowException();
	this->sign = true;
}
//operator
std::ostream	&operator << (std::ostream &out, const Form &other)
{
	out << "Form name: " << other.GetName() << " Form grade signed: " << other.GetGradeToSign() << " Form Grade execute: " << other.GetGradeToExec() << "\n";
	if (other.GetSign() == false)
		out << "Form is not signed" << std::endl;
	else
		out << "Form is signed"  << std::endl;
	return (out);
}

bool	Form::checkRequements(Bureaucrat const &bure) const
{
	if (this->GetSign() == true && bure.GetGrade() <= GetGradeToExec())
		return (true);
	else
		throw GradeTooLowException();
}