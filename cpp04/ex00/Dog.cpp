/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:54:28 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:37:09 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
}
Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->type = other.type;
}

Dog	&Dog::operator = (const Dog &other)
{
	std::cout << "Dog Assigment operator Called" << std::endl;
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "haw haw , sir fihalk rah nji lik (Dog say's)" << std::endl;
}
