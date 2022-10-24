/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:47:34 by hharik            #+#    #+#             */
/*   Updated: 2022/07/19 11:16:58 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main(void)
{
	// ClapTrap Clap("t-rex");
	// ClapTrap Trap("urmom");
	// Clap.attack("urmom");
	// Trap.takeDamage(20);
	// Trap.beRepaired(5);
	std::cout << ":::::::::::::::: ScavTrap ::::::::::" << std::endl;
	ScavTrap Scav("man");
	ScavTrap ScavTrp("women");
	Scav.attack("urmom");
	ScavTrp.takeDamage(10);
	ScavTrp.beRepaired(10);
	ScavTrp.guardGate();
}