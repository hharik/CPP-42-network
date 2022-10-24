/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:04:49 by hharik            #+#    #+#             */
/*   Updated: 2022/07/19 12:50:07 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP_
# define SCAVTRAP_HPP_
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap		
{
	public:
		ScavTrap(void);
		ScavTrap(std::string _name);
		~ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator = (const ScavTrap &other);
		void	attack(const std::string &target);
		void	guardGate(void);
};


#endif