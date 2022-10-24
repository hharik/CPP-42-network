/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:47:27 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 15:10:16 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	//init the name string 
	std::string name = "HI THIS IS BRAIN";
	//stringPTR is a pointer to name
	std::string *stringPTR = &name;
	//stringref is  ref to name
	std::string &stringRef = name;
	//first print
	std::cout << "the memory address of the name variable is : " << &name << std::endl;
	std::cout << "the memory address held by stringptr is : " << stringPTR << std::endl;
	std::cout << "the memory address held by stringRef is : " << &stringRef << std::endl;
	//second print
	std::cout << "the value of the name string is : " << name << std::endl;
	std::cout << "the value pointed to by stringPtr is : " << *stringPTR << std::endl;
	std::cout << "the value pointer to by stringRef is : " << stringRef << std::endl;
}