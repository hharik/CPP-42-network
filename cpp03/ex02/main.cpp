/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:47:34 by hharik            #+#    #+#             */
/*   Updated: 2022/07/19 11:18:14 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	// ClapTrap Clap("t-rex");
	// ClapTrap Trap("urmom");
	// Clap.attack("urmom");
	// Trap.takeDamage(20);
	// Trap.beRepaired(5);
	// std::cout << ":::::::::::::::::::::::::: ScavTrap :::::::::::::::::::::" << std::endl;
	// ScavTrap Scav("man");
	// ScavTrap ScavTrp("women");
	// Scav.attack("urmom");
	// ScavTrp.takeDamage(10);
	// ScavTrp.beRepaired(10);
	// ScavTrp.guardGate();
	std::cout << ":::::::::::::::::::::::::: FragTrap ::::::::::::::::::::::" << std::endl;
	FragTrap Frag("frag");
	FragTrap fish("fish");
	Frag.attack("fish");
	fish.takeDamage(90);
	fish.attack("frag");
	Frag.takeDamage(50);
	fish.beRepaired(90);
	Frag.highFivesGuys();
}