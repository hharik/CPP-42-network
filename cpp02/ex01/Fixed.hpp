/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:32:41 by hharik            #+#    #+#             */
/*   Updated: 2022/07/17 18:51:07 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP_
# define FIXED_HPP_

#include <iostream>
#include <math.h>
#include <string>
class Fixed
{
	private:
		int fixed_number;
		static const int fractional_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other);
		Fixed &operator = (const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	//ex01 new things
		Fixed(const int n);
		Fixed(const float n);
		float	toFloat(void) const;
		int 	toInt(void) const;
};
std::ostream	&operator << (std::ostream &out , const Fixed &other);

#endif