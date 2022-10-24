/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:41:47 by hharik            #+#    #+#             */
/*   Updated: 2022/07/25 12:14:21 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP_
#define	CHARACTER_HPP_

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string n_name;
		AMateria *skils[4];
		int index;
				
	public:
		Character(const Character &other);
		Character(void);
		Character(std::string name);
		virtual ~Character();
		std::string	const &getName(void) const;
		void	equip(AMateria	*m);
		void	unequip(int	idx);
		void	use(int idx, ICharacter &target);
		Character	&operator = (const Character &other);

};

#endif