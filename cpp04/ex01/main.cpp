/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:23:28 by hharik            #+#    #+#             */
/*   Updated: 2022/07/26 09:19:58 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *ani[100];
	for (int  i = 0; i < 100; i++)
	{
		if (i < 50)
			ani[i] = new Dog();
		else
			ani[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		delete ani[i];
	}
	// std::cout << "***************" << std::endl;
	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
	// basic.printBrain();
	// system("leaks Polymorphism");
}