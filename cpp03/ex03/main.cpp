/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:47:34 by hharik            #+#    #+#             */
/*   Updated: 2022/07/21 12:30:11 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
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
	DiamondTrap	diamond("joker");
	DiamondTrap trap("urmom");
	diamond.attack("urmom");
	trap.takeDamage(5);
	trap.beRepaired(5);
	trap.highFivesGuys();
	trap.guardGate();
	trap.whoAmI();
}