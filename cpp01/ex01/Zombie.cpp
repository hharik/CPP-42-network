/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:51:33 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 13:46:17 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//base initializers
Zombie::Zombie(void) : name("no name")
{
	std::cout << "Constractor Default" << std::endl;
}
Zombie::Zombie(std::string _name) : name(_name)
{
	std::cout << "Constractor with a name set" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": destructor" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string _name)
{
	this->name = _name;
}