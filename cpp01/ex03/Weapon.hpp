/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:23:48 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 15:36:01 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
# define WEAPON_HPP_

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string _type);
	std::string		getType(void) const;
	void	setType(std::string new_type);
};

#endif