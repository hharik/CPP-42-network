/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:59:11 by hharik            #+#    #+#             */
/*   Updated: 2022/07/25 14:52:03 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : n_name(name) , skils(), index(0)
{
	std::cout << "Character Constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete skils[i];
}

Character::Character(const Character &other)
{
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = other;
}

Character	&Character::operator = (const Character &other)
{
	std::cout << "Character Assigment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->n_name = other.n_name;
	this->index = other.index;
	for (int i = 0; i < 4; i++)
	{
		if (this->skils[i] != NULL)
		{
			delete skils[i];
			skils[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		this->skils[i] = other.skils[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->n_name);
}

void	Character::equip(AMateria *m)
{
	int a;

	a = 0;
	while (skils[a])
	a++;
	if (a < 4)
		skils[a] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		if(skils[idx])
		{
			//will make it a pointer to nothing
			skils[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && idx >= 0)
	{
		if (skils[idx])
			skils[idx]->use(target);
	}
}
