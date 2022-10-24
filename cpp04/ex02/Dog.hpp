/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:38:28 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:54:06 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
# define DOG_HPP_
#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *Dog_ideas;
		
	public:
		Dog(void);
		~Dog();
		Dog(const Dog &other);
		Dog &operator = (const Dog &other);
		void	makeSound(void) const;
		void	printBrain(void);
};

#endif