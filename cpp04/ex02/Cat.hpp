/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:37:20 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:36:28 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	private:
		Brain *Cat_ideas;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &other);
		Cat &operator = (const Cat &other);
		void	makeSound(void) const;
};
#endif