/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:47:05 by hharik            #+#    #+#             */
/*   Updated: 2022/08/01 13:32:14 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_
#include <stack>

#include <iostream>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>(){}
		~MutantStack(){}
		MutantStack(const MutantStack &other)
		{
			*this = other;
		}
		MutantStack &operator = (const MutantStack &other)
		{
			this->c = other.c;
			return (*this);
		}
		
		typedef  typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return (this->c.begin());
		};
		iterator	end()
		{
			return (this->c.end());
		}
};
#endif