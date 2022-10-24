/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:23:28 by hharik            #+#    #+#             */
/*   Updated: 2022/07/26 09:21:00 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
	std::cout << "::::::::::::::::::::::::::::: WrongCat tests :::::::::::::::::::::::::::::" << std::endl;
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* i1 = new WrongCat();
	std::cout << i1->getType() << " (Wrong cat test)" << std::endl;
	i1->makeSound(); //will output the WrongAnimal sound!
	Wrongmeta->makeSound();
	delete i1;
	delete Wrongmeta;
	//system("leaks Polymorphism");
	return 0;
}