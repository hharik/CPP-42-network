/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:54:44 by hharik            #+#    #+#             */
/*   Updated: 2022/07/19 14:15:27 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap::ClapTrap(_name + "_clap_name")
{
	this->name = _name;
	this->hit_points = FragTrap::hit_points; // specifying the scoop and from the value of hit_point will come
	this->energy_points = ScavTrap::energy_points;
	this->attack_damages = FragTrap::attack_damages;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is : " << this->name << std::endl;
	std::cout << "ClapTrap name is : " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}