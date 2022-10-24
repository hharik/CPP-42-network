/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:23:33 by hharik            #+#    #+#             */
/*   Updated: 2022/08/01 14:31:13 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}
Span::Span(unsigned int _n) : size_n(_n)
{
	std::cout << "Span Constructor called" << std::endl;
}

Span::Span(const Span &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

Span	&Span::operator = (const Span &other)
{
	std::cout << "Span Assigment operator called" << std::endl;
	if (this != &other)
	{
		this->_N = other._N;
		this->size_n = other.size_n;
	}
	return (*this);
}

void	Span::addNumber(int _n)
{
	if(this->_N.size() == this->size_n)
		throw Span::MYEXECP();
	this->_N.push_back(_n);
}


unsigned int	Span::shortestSpan() const
{
	if (this->size_n < 2 || this->_N.size() < 2)
		throw	Span::SPANISSHORT();
	std::vector <int> myvec(_N); // calling the copy constructor of the vector
	std::sort(myvec.begin(), myvec.end());
	int val =  *(myvec.begin() + 1) - *myvec.begin();
	for (std::vector<int>::iterator iter = myvec.begin(); iter != myvec.end() - 1; ++iter)
	{
		if (*(iter + 1) - *iter < val)
			val = *(iter + 1) - *iter;
	}
	return (val);
}

unsigned int 	Span::longestSpan() const
{
	if (this->size_n < 2 || this->_N.size() < 2)
		throw Span::SPANISSHORT();
	std::vector <int> tmp(_N);
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

// void	Span::printList()
// {
// 	for (std::vector<int>::iterator iter = this->_N.begin(); iter != _N.end(); ++iter)
// 		std::cout << "value is " << *iter << std::endl;
// }

void	Span::ADD_range(std::vector<int>::iterator first, std::vector<int>::iterator end)
{
	//std::distance The number of increments needed to go from first to last
	if (this->_N.size() + std::distance(first, end) >= this->size_n)
		throw 	Span::MYEXECP();
	_N.insert(this->_N.end(), first, end);
}

const char *Span::SPANISSHORT::what() const _NOEXCEPT
{
	return ("Span is Short");
}

const char *Span::MYEXECP::what() const _NOEXCEPT
{
	return ("Span is full");
}