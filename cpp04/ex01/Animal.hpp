/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:33:15 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:41:52 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_
#include <iostream>
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
		Animal(const Animal &other);
		Animal &operator = (const Animal &other);
		virtual void	makeSound(void) const;
		std::string	getType(void) const;
};

#endif