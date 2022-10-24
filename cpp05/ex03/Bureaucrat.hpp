/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:04:15 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 10:30:33 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator = (const Bureaucrat &other);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char *what() const _NOEXCEPT;	
		};
		
		int	GetGrade(void) const;
		std::string	GetName(void) const;
		void	increment(void);
		void	decrement(void);

		//new things
		void	signForm(Form &form);
		//ex02
		void	executeForm(Form const &form);
};

std::ostream	&operator << (std::ostream &out, const Bureaucrat &other);
#endif