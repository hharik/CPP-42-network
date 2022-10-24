/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:43:43 by hharik            #+#    #+#             */
/*   Updated: 2022/07/21 12:24:35 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP_
# define FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string _name);
		~FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap &operator = (const FragTrap &other);
		void	highFivesGuys(void);
		void	attack(const std::string &target);
};


#endif