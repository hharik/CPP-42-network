/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:04:45 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 16:33:31 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include <iostream>
#include "Weapon.hpp"
class HumanB
{
	private:
		std::string	name;
		Weapon	*_wep;
		//unlike HumanA this class somtimes cant have a wep so having a pointer Weapon will help us set the wep to a null
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void 	attack(void);
		void	setWeapon(Weapon wep);
};
#endif