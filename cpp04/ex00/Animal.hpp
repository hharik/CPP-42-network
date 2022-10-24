/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:33:15 by hharik            #+#    #+#             */
/*   Updated: 2022/07/21 09:19:17 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_
#include <iostream>
//virtual function is a member function in the base class 
//that we expect to redefine in derived classes.
///////
//destructor needs to be virtual because we trying to delete a devired class too not just the base
// Base *b = new Derived();
// use b
// delete b; // Here's the problem!

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		virtual ~Animal();
		Animal(std::string _type);
		Animal(const Animal &other);
		Animal	&operator = (const Animal &other);
		virtual void	makeSound(void) const; //every class who inherit shape need to define this function
		std::string	getType(void) const;
};

#endif