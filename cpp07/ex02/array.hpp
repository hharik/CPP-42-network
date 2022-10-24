/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:57:09 by hharik            #+#    #+#             */
/*   Updated: 2022/07/30 15:56:18 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP_
# define ARRAY_HPP_

#include <iostream>

template <class T>
class Array
{
	private:
		T *aray;
		size_t	size_;
	public:
		Array() : aray(NULL), size_(0)
		{
			std::cout << "Array constructor called" << std::endl;
		}
		~Array()
		{
			std::cout << "Array Destructor called" << std::endl;
			delete [] aray;
		}
		Array(unsigned int n)
		{
			std::cout << "Array Constructor called" << std::endl;
			this->aray = new T[n];
			this->size_ = n;
		}
		Array(const Array &other)
		{
			*this = other;
		}
		Array	&operator = (const Array &other)
		{
			if (this != &other)
			{
				if (!this->aray)
					delete [] aray;
				this->size_ = other.size_;
				this->aray = new T[size_];
				for (unsigned int i = 0; i < size_; i++)
					this->aray[i] = other.aray[i];
				std::cout << "desplayed \n";
			}
			return (*this);
		}
		class INDEXISOUTOFBOUNDS : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Index is out of bounds");
				}
		};
		T	&operator [] (unsigned int index)
		{
			if (index >= size_ || index < 0)
				throw Array::INDEXISOUTOFBOUNDS();
			return aray[index];
		}
		T	&operator [] (unsigned int index) const
		{
			if (index >= size_ || index < 0)
				throw Array::INDEXISOUTOFBOUNDS();
			return aray[index];
		}
		size_t	size(void) const
		{
			return (size_);
		}
};


#endif