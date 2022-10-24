/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:31:42 by hharik            #+#    #+#             */
/*   Updated: 2022/07/26 17:47:52 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

Form	*Intern::MakeForm(std::string type_of_form, std::string target)
{
	int index = -1;
	std::string level_type[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3 ; i++)
	{
		if (level_type[i] == type_of_form)
			index = i;
	}
	if (index == -1)
	{
		std::cout << "Type of Form is not found" << std::endl;
		return (NULL);
	}
	Form *forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (index != i)
			delete forms[i];
	}
	return (forms[index]);
}