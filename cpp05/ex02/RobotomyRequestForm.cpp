/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:58:54 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 17:20:02 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form("RobotomyRequestForm", 72, 45),  target(name)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
	this->target = other.target;
}
RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm  &other)
{
	this->target = other.target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &bure) const
{
	checkRequements(bure);
	std::cout << "Some Drilling noises !!!!!!" << std::endl;
	srand(time(NULL));
	int randnmb = rand() % 2;
	if (randnmb == 0)
		std::cout << "robotmy Failed :(" << std::endl;
	else
		std::cout << this->target << " has been robotmized successfully" << std::endl;
}