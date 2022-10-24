/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:32:30 by hharik            #+#    #+#             */
/*   Updated: 2022/07/19 10:33:52 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("no name")
{
	std::cout << "Default ScavTrap Constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damages = 20;

}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damages = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = other;
}

ScavTrap	&ScavTrap::operator  = (const ScavTrap &other)
{
	std::cout << "ScavTrap assigment operator called" << std::endl;
	this->name = other.name;
	this->attack_damages = other.attack_damages;
	this->energy_points = other.energy_points;
	this->hit_points = other.energy_points;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 || this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damages << " points of damage" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "ScavTrap can't attack, there is not any energy point left" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;	
}
