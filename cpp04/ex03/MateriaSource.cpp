/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:03:52 by hharik            #+#    #+#             */
/*   Updated: 2022/07/25 14:58:33 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : skils(), last_index(0)
{
	std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (skils[i] != NULL)
			delete skils[i];
	}
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = other;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &other)
{
	std::cout << "MateriaSource Assigment operator called" << std::endl;
	if (this != &other)
	{
		this->last_index = other.last_index;
		for (int i = 0; i < 4; i++)
		{
			if (this->skils[i])
				delete this->skils[i];
			this->skils[i] = other.skils[i]->clone();
		}
	}
	return (*this);
}	

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < last_index; i++)
	{
		if (skils[i]->getType() == type)
			return (skils[i]->clone());
	}
	return (NULL);
}
void	MateriaSource::learnMateria(AMateria *other)
{
	if (last_index < 4)
	{
		this->skils[last_index] = other->clone();
		last_index++;
	}
}