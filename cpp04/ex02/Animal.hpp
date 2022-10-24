/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:33:15 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:58:49 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_
#include <iostream>
//destructor needs to be virtual because we trying to delete a devired class too not just the base
// Base *b = new Derived();
// use b
// delete b; // Here's the problem!
////////////////////////////
//A pure virtual function in C++ is nothing but a virtual function that we know exists 
//but cannot be implemented. It is simply declared, not implemented.
class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator = (const Animal &other);
		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;
};

#endif