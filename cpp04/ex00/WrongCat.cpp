/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:45:26 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:41:10 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "wrongCat don't make sounds , they just sleep all day long" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	this->type = other.type;
}

WrongCat &WrongCat::operator = (const WrongCat &other)
{
	std::cout << "WrongCat Assigment Operator called" << std::endl;
	this->type = other.type;
	return (*this);
}