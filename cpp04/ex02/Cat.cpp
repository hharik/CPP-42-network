/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:50:30 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:36:33 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	Cat_ideas = new Brain();
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete Cat_ideas;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "ewwwwwwwww (cat say's)" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	//this->Cat_ideas = new Brain(); // deep copy
	*this = other; // calling the Cat operator
}

Cat	&Cat::operator = (const Cat &other)
{
	//deep copy means creating a new Brain for both cat and Dog  
	//this->Cat_ideas = other.Cat_ideas;	//shallow copy
	std::cout << "Cat Assigment Operator Called" << std::endl;
	if (this != &other) // self assigment check
	{
		this->type = other.type;
		if (Cat_ideas != NULL)
			delete Cat_ideas;
		Cat_ideas = new Brain(*other.Cat_ideas); // deep copy
	}
	return *this;
}