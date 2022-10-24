/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:43:21 by hharik            #+#    #+#             */
/*   Updated: 2022/08/01 14:17:59 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "MutantStack.hpp"
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "################## MY TESTS #####################" << std::endl;
	srand(time(NULL));
	MutantStack<int> tests;
	for (int i = 0; i < 20; i++)
		tests.push(rand());
	for (MutantStack<int>::iterator it = tests.begin(); it != tests.end() ; ++it)
		std::cout << *it << std::endl;
	std::cout << "############### iterating from end to begin ################# " << std::endl;
	MutantStack<int> test;
	test.push(12);
	test.push(6666);
	test.push(5555);
	test.push(144);
	test.push(1222);
	test.push(7777);
	for(MutantStack<int>::iterator iter = test.end() - 1; iter != test.begin() - 1; --iter)
		std::cout << "Rverse : >> " << *iter << std::endl;
	std::cout << "tes > > " << *test.end() << std::endl;
	return (0);
} 
