/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:48:53 by hharik            #+#    #+#             */
/*   Updated: 2022/07/30 15:56:22 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main()
{
	Array <int> t(10);
	std::cout << "######################         FIRST TESTS (Deep copy)   ################" << std::endl;
	for(int i = 0; i < 10 ; i++)
	{
		t[i] = 123;
	}
	Array <int> test(t);
	for (int i = 0; i < 10; i++)
	{
		std::cout << "original int : " << t[i] << std::endl;
		std::cout << "copy : " << test[i] << std::endl;
	}
	for (int i = 0; i < 10 ; i++)
	{
		t[i] = 456;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << "after change : " << t[i] << std::endl;
		std::cout << "copy : " << test[i] << std::endl;
	}
	Array<int> assi = t;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "original  : " << t[i] << std::endl;
		std::cout << "copy : " << assi[i] << std::endl;
	}
	std::cout << "############################## SECOND TESTS (index out of bounds)##########################" << std::endl;
	try
	{
		t[11] = 3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "################################ Third Tests (creat a ny empty array) ##################" << std::endl;
	// Array <std::string> str;
	// int *a = new int();
	// std::cout << *a << std::endl;
	const Array <int> test1(3);
	test[0] = 333;
	test[1] = 333;
	test[2] = 333;
	for (int  i = 0; i < 3 ; i++)
		std::cout << test1[i] << "\n";
}
// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
		
//     }
	
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
// 		Array<int> tmpp(numbers); 
//         //Array<int> test(tmp);
		
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		std::cout << "cont " << numbers[i] << std::endl;
// 	}
//     delete [] mirror;//
//     return 0;
// }