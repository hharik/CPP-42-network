/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:44:30 by hharik            #+#    #+#             */
/*   Updated: 2022/07/19 11:21:27 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damages = 30;
}

FragTrap::FragTrap(void) : ClapTrap("no name")
{
	std::cout << "Default FragTrap Constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damages = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->energy_points > 0 || this->hit_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damages << " points of damage" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "FragTrap can't attack, there is not any energy point left" << std::endl;
}