/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:22:20 by hharik            #+#    #+#             */
/*   Updated: 2022/07/29 17:05:02 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template	<typename T>
void	Func(const T &a)
{
	std::cout << "the value is : " << a << std::endl;
}

int main()
{
	std::string arr[5] = {"urmom", "hello", "Dog", "cat", "name"};
	int 	itarray[3] = {2, 1, 5};
	float 	floatnumber[5] = {13.2, 155.3 , 66.43, 55.33, 556.44};
	iter(arr, 5, &Func);
	std::cout << "###############" << std::endl;
	iter(itarray, 3, &Func);
	std::cout << "###############" << std::endl;
	iter(floatnumber, 5, &Func);
}