/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:50:30 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:37:01 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "ewwwwwwwww (cat say's)" << std::endl;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->type = other.type;
}

Cat	&Cat::operator = (const Cat &other)
{
	std::cout << "Cat Assigment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}