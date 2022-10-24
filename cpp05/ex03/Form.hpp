/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:46:29 by hharik            #+#    #+#             */
/*   Updated: 2022/07/26 17:48:37 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP_
# define FORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool	sign;
		const int	grade_to_sign;
		const int	grade_to_exec;
	public:
		Form(void);
		virtual ~Form();
		Form(std::string _name , int _grade_to_sign, int _grade_to_exec);
		Form(const Form &other);
		Form	&operator = (const Form  &other);
	
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
		
		std::string	GetName(void) const;
		bool	GetSign(void) const;
		int	GetGradeToSign(void) const;
		int	GetGradeToExec(void) const;
		void	beSigned(const Bureaucrat &to_sign);
		//exe02
		bool	checkRequements(Bureaucrat const &bure) const;
		virtual void	execute(Bureaucrat const &bure) const = 0;
};
std::ostream	&operator << (std::ostream &out, const Form &other);
#endif