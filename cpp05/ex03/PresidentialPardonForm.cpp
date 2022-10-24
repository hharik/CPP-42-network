/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:04:47 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 17:18:08 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form("PresidentialPardonForm", 25, 5),  target(name)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other)
{
	this->target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator= (const PresidentialPardonForm &other)
{
	this->target = other.target;
	return (*this);
}
void	PresidentialPardonForm::execute(Bureaucrat const & bure) const 
{
	checkRequements(bure);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}