/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:15:10 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 22:19:48 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP_
# define CURE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class	ICharacter;
class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &other);
		Cure &operator = (const Cure &other);
		AMateria *clone(void) const;
		void	use(ICharacter &target);
};


#endif