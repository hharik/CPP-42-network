/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:37:27 by hharik            #+#    #+#             */
/*   Updated: 2022/08/01 14:22:28 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void	easyfind(std::vector<T> a, int to_find)
{
	//decleration of vector iterator
	typename std::vector<T>::iterator iter;
	iter = std::find(a.begin(), a.end(), to_find);
	if (iter != a.end())
		std::cout << "found it" << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

int main()
{
	//decleration of int vector
	std::vector <int> elem;
	elem.push_back(1);
	elem.push_back(545);
	elem.push_back(13333);
	elem.push_back(111);
	easyfind(elem, 2);
	for (std::vector <int>::iterator it = elem.begin() ; it  != elem.end(); ++it)
		std::cout << "**>  " << *it << std::endl;
	std::cout << "################" << std::endl;
	std::vector <int> test2;
	test2.push_back(122222);
	test2.push_back(123);
	test2.push_back(222);
	test2.push_back(555);
	for (std::vector <int>::iterator tr = test2.begin(); tr != test2.end(); ++tr)
		std::cout << "/** > "  << *tr << std::endl;
	easyfind(test2, 123);
}