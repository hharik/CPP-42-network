/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:26:59 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 15:36:49 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(void)
{
	std::cout << "Default Constractor of Weapon" << std::endl;
}

Weapon::Weapon(std::string _type) : type(_type)
{
	std::cout << "Constractor of Weapon with a type set" << std::endl;
}
Weapon::~Weapon(void){}

std::string	Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}