/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:51:52 by hharik            #+#    #+#             */
/*   Updated: 2022/07/21 12:10:01 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string _name) : name(_name) , hit_points(10), energy_points(10), attack_damages(0)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other)
{
	this->attack_damages = other.attack_damages;
	this->energy_points = other.energy_points;
	this->hit_points = other.hit_points;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 || this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name  << " attacks "  << target << " causing " << this->attack_damages << " points of damage" << std::endl;
		energy_points--;
	}
	else
		std::cout << "ClapTrap cant attack because he doesn't have any energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->hit_points)
	{
		this->hit_points = 0;
		std::cout << "ClapTrap health has dropped to 0" << std::endl;
	}
	else
	{
		this->hit_points -= amount;
		std::cout << "ClapTrap Took this amount of damage " << amount  << std::endl << "ClapTrap " << this->name << " has " << this->hit_points <<  std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points > 0 || this->hit_points > 0)
	{
		std::cout << "ClapTrap has Repaired itself by this amount : " << amount  << std::endl;	
		this->hit_points += amount;
		this->energy_points--;
		std::cout << "ClapTrap Health level : " << this->hit_points << std::endl;
	}
	else
		std::cout << "ClapTrap can't BeRepaired because there isnt any energy point left" << std::endl;
}
