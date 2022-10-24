/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:47:44 by hharik            #+#    #+#             */
/*   Updated: 2022/07/21 12:09:14 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP_
# define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		unsigned int	hit_points;
		unsigned int	energy_points;
		unsigned int	attack_damages;
	public:
		ClapTrap(void);
		ClapTrap(std::string _name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap	&operator = (const ClapTrap &other);
		void 	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif