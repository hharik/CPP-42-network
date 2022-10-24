/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:32:41 by hharik            #+#    #+#             */
/*   Updated: 2022/07/18 14:08:18 by hharik           ###   ########.fr       */
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
	//ex02 new things
	//comparison operators
	bool	operator > (const Fixed &other) const;
	bool	operator < (const Fixed &other) const;
	bool	operator <= (const Fixed &other);
	bool	operator >= (const Fixed &other);
	bool	operator == (const Fixed &other);
	bool	operator != (const Fixed &other);
	//arithmetic operators
	Fixed	operator + (const Fixed &other);
	Fixed	operator - (const Fixed &other);
	Fixed	operator * (const Fixed &other);
	Fixed	operator / (const Fixed &other);
	//4 increment/ decrement operators
	Fixed	operator ++ (int);//postfix increment operator a++
	Fixed	&operator ++();//prefix increment operator ++a
	Fixed	operator -- (int); // postfix decrement operator a--
	Fixed	&operator --();//prefix decrement operator --a
	//min && max
	static Fixed	&min(Fixed &n1, Fixed &n2);
	static const Fixed	&min(const Fixed &n1, const Fixed &n2);
	static const Fixed	&max(const Fixed &n1, const Fixed &n2);
	static Fixed	&max(Fixed &n1, Fixed &n2);	
};

std::ostream	&operator << (std::ostream &out , const Fixed &other);

#endif