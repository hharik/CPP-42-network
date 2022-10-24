/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:37:51 by hharik            #+#    #+#             */
/*   Updated: 2022/07/18 11:54:09 by hharik           ###   ########.fr       */
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
	//for outputing the same output as the subject i had to do this so it can call the assigment operator  
	*this = other;
	//original approach
	//this->fixed_number = other.fixed_number;
	std::cout << "Copy constructor called" << std::endl;
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
	//multiply the float by 2 ^ fractional_bits && round the result
	fixed_number = roundf(n * (1 << fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
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
//ex02 new things
//comaprison operators
bool	Fixed::operator > (const Fixed &other) const
{
	return (this->fixed_number > other.fixed_number);
}

bool	Fixed::operator < (const Fixed &other) const
{
	return (this->fixed_number < other.fixed_number);
}

bool	Fixed::operator <= (const Fixed &other)
{
	return !(this->fixed_number < other.fixed_number);
}

bool	Fixed::operator >= (const Fixed &other)
{
	return !(this->fixed_number > other.fixed_number);
}

bool	Fixed::operator == (const Fixed &other)
{
	return (this->fixed_number == other.fixed_number);
}

bool	Fixed::operator != (const Fixed &other)
{
	return !(this->fixed_number == other.fixed_number);
}

//arithmetic operators

Fixed	Fixed::operator + (const Fixed &other)
{
	Fixed tmp;
	tmp = (this->toFloat() + other.toFloat());
	return (tmp);
}

Fixed	Fixed::operator - (const Fixed &other)
{
	Fixed tmp;
	tmp = (this->toFloat() - other.toFloat());
	return (tmp);	
}

Fixed	Fixed::operator * (const Fixed &other)
{
	Fixed tmp;
	tmp = (this->toFloat() * other.toFloat());
	return (tmp);
}

Fixed	Fixed::operator / (const Fixed &other)
{
	Fixed tmp;
	tmp = (this->toFloat() / other.toFloat());
	return (tmp); 
}
//4 increment/ decrement operators
//keep in mind !!!!!!!!!!!!!!!!!!!!
//If you use the ++ operator as a prefix like: ++var, the value of var is incremented by 1; then it returns the value.
//If you use the ++ operator as a postfix like: var++, the original value of var is returned first; then var is incremented by 1.

Fixed	Fixed::operator ++ (int)//postfix increment operator a++
{
	Fixed temp = *this;
	++this->fixed_number;
	return (temp);
}

Fixed	&Fixed::operator ++ ()//prefix increment operator ++a
{
	fixed_number++;
	return (*this);
}
Fixed	Fixed::operator -- (int) // postfix decrement operator a--
{
	Fixed temp = *this;
	--this->fixed_number;
	return (temp);
}

Fixed	&Fixed::operator -- () // prefix decrement operator --a
{
	fixed_number--;
	return (*this);
}
//min && max
Fixed	&Fixed::min(Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

const Fixed	&Fixed::min(const Fixed &n1, const Fixed &n2) 
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}
const Fixed	&Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}
