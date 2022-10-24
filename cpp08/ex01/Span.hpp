/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:09:42 by hharik            #+#    #+#             */
/*   Updated: 2022/08/01 14:31:17 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP_
# define SPAN_HPP_
#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
	private:
		std::vector <int> _N;
		unsigned int size_n;
		Span();
	public:
		~Span();
		Span(unsigned int _n);
		Span(const Span &other);
		Span	&operator = (const Span &other);
		void	addNumber(int _n);
		class	MYEXECP : public  std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
		class	SPANISSHORT : public  std::exception
		{
			public:
				const char *what() const _NOEXCEPT;
		};
		unsigned int	shortestSpan() const;
		unsigned int 	longestSpan() const;
		// void	printList();
		void	ADD_range(std::vector<int>::iterator first, std::vector<int>::iterator end);
};

#endif