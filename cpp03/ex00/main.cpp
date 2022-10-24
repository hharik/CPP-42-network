/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:47:34 by hharik            #+#    #+#             */
/*   Updated: 2022/07/18 19:57:48 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Clap("t-rex");
	ClapTrap Trap("urmom");
	Clap.attack("urmom");
	Trap.takeDamage(20);
	Trap.beRepaired(5);
}