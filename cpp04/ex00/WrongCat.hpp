/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:25:25 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:38:48 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP_
# define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &other);
		WrongCat &operator = (const WrongCat &other);
		void	makeSound(void) const;
};
#endif