/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:37:51 by hharik            #+#    #+#             */
/*   Updated: 2022/07/20 09:18:38 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//The idea behind fixed-point arithmetic is that you store the values multiplied by a certain amount, use the multiplied values for all calculus, and divide it by the same amount when you want the result. The purpose of this technique is to use integer arithmetic (int, long...) while being able to represent fractions

Fixed::Fixed(void)
{
	this->fixed_number = 0;
	std::cout << "Default constractor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	//for outputing the same output as the subject i had to do this so it can call the assigment operator  
	//original approach
	//this->fixed_number = other.fixed_number;
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator = (const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->fixed_number = other.fixed_number;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_number = raw;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
//ex01 new things
//constructors

Fixed::Fixed(const float n)
{
	//multiply the float by 1 ^ fractional_bits && round the result to get a fixed point number
	fixed_number = roundf(n * (1 << fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	//left shifiting the number by the fractional_bits will convert the number to a fixed number
	std::cout << "Int constractor called" << std::endl;
	fixed_number = n << fractional_bits;
}

float	Fixed::toFloat(void) const
{
	
	return ((float) fixed_number / (1 << fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (fixed_number >> fractional_bits);
}

std::ostream	&operator << (std::ostream &out , const Fixed &other)
{
	out << other.toFloat();
	return out;
}