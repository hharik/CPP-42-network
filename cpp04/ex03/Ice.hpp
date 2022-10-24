/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:53:57 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 22:03:49 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP_
#define ICE_HPP_
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		~Ice();
		Ice(void);
		Ice(const Ice &other);
		Ice &operator = (const Ice &other);
		AMateria	*clone(void) const;
		void use(ICharacter& target);
};



#endif