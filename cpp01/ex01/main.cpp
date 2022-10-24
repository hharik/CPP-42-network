/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:18:30 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 13:46:58 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
	int N = 9;
	Zombie *Zombies = zombieHorde(N, "najib");
	for (int i = 0; i < N ; i++)
	{
		Zombies[i].announce();
	}
	delete []Zombies;
	//system("leaks Zombie");
}
//delete[] operator is a the same as delete but the delete[] deallocates memory and calls destructor for an array of objects