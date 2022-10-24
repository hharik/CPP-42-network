/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:29:34 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 15:32:27 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *alot_of_Zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		alot_of_Zombies[i].setname(name);
	}
	return (alot_of_Zombies);
}