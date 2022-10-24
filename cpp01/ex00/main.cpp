/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:18:30 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 13:23:54 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
	Zombie z("hamid");
	z.announce();
	Zombie *h = newZombie("hamza");
	h->announce();
	randomChump("ji");
	delete h;
}