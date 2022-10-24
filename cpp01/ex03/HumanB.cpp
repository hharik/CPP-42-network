/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:08:03 by hharik            #+#    #+#             */
/*   Updated: 2022/07/17 11:16:28 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
HumanB::HumanB(std::string _name) : name(_name) , _wep(NULL)
{
	std::cout << "Constractor of humanb" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Destuctor of Humanb" << std::endl;
}

void	HumanB::setWeapon(Weapon wep)
{
	this->_wep = &wep;
	std::cout << "Set Weapon is called" << std::endl;
}

void	HumanB::attack(void)
{
	if (_wep == NULL)
	{
		std::cout << name << " attacks without a weapon" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << _wep->getType() << std::endl;
}