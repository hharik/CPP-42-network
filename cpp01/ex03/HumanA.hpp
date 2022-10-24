/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:33:06 by hharik            #+#    #+#             */
/*   Updated: 2022/07/17 11:19:15 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP_
# define HUMANA_HPP_
#include "Weapon.hpp"
#include <iostream>
class HumanA
{
	private:
		std::string name;
		Weapon &_Wep;
		//humanA always have a weapon from the creation till the destruction and never changes 
	public:
		HumanA(std::string _name, Weapon &wep);
		~HumanA();
		void	attack(void);
};
#endif
