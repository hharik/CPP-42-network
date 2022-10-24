/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:34:17 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:48:33 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = "an idea";
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	for (int i = 0; i < 100 ; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator = (const Brain &other)
{
	std::cout << "Brain assignement operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

void	Brain::printBrainideas(void) const
{
	std::cout << "##Brains ideas##" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
	std::cout << "##End Of Ideas" << std::endl;
}