/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:54:28 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:54:35 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	Dog_ideas = new Brain();
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}
Dog::~Dog(void)
{
	delete Dog_ideas;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "haw haw , sir fihalk rah nji lik (Dog say's)" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	//deep copy means creating a new Brain for both cat and Dog  
	// this->Dog_ideas = new Brain();
	*this = other;
}

Dog	&Dog::operator = (const Dog &other)
{
	//deep copy means creating a new Brain for both cat and Dog  
	//this->Dog_ideas = other.Dog_ideas;	//shallow copy
	std::cout << "Dog Assigment Operator Called" << std::endl;
	if (this != &other) // self assigment check
	{
		this->type = other.type;
		if (Dog_ideas != NULL)
			delete Dog_ideas;
		Dog_ideas = new Brain(*other.Dog_ideas); // deep copy
	}
	return *this;
}
void	Dog::printBrain(void)
{
	this->Dog_ideas->printBrainideas();
}
