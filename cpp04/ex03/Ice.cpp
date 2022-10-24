/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:59:12 by hharik            #+#    #+#             */
/*   Updated: 2022/07/25 14:52:25 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(const Ice &other)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = other;
}

Ice	&Ice::operator = (const Ice &other) 
{
	std::cout << "Ice Assigment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}
Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Constructor called" <<std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}