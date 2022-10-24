/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 11:53:23 by hharik            #+#    #+#             */
/*   Updated: 2022/06/18 19:57:32 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
int main()
{
	std::string str;
	std::cout << "options are : EXIT || ADD || SEARCH\n";
	PhoneBook phonebook;
	while (std::cout << "enter option $> " && std::getline(std::cin, str))
	{
		if (str == "ADD")
			phonebook.ADD_contact();
		else if (str == "SEARCH")
			phonebook.search_contact();
		else if (str == "EXIT")
		{
			std::cout << "exit";
			return (0);
		}
		else
			std::cout << "not valid option\n";
	}
}