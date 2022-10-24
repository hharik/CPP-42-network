/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:32:00 by hharik            #+#    #+#             */
/*   Updated: 2022/07/24 16:46:57 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
# define BRAIN_HPP_

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		~Brain();
		Brain(const Brain &other);
		Brain &operator = (const Brain &other);
		void	printBrainideas(void) const;
};
#endif