/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:48:00 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 16:24:01 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &wep) : name(_name) , _Wep(wep)
{
	std::cout << "Constructor of HumanA" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "destructor of humanA" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << _Wep.getType() << std::endl;
}
