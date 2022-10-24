/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:37:51 by hharik            #+#    #+#             */
/*   Updated: 2022/07/20 09:17:33 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixed_number = 0;
	std::cout << "Default constractor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	//for having the same output had to call the assigment operator
	//original approche
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