/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:46:36 by hharik            #+#    #+#             */
/*   Updated: 2022/07/25 14:51:43 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &_type) : type(_type)
{
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(void)
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = other;
}

AMateria	&AMateria::operator = (const AMateria &other)
{
	std::cout << "AMateria Assigment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter & target)
{
	(void) target;
}