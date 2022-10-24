/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:45:32 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:58:53 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type ("No Type")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = other.type;
}

Animal	&Animal::operator = (const Animal &other)
{
	std::cout << "Animal Assigment operator called "<< std::endl;
	this->type = other.type;
	return (*this);
}