/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:10:34 by hharik            #+#    #+#             */
/*   Updated: 2022/06/19 11:18:52 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : index_contact(0) {}

PhoneBook::~PhoneBook(){}

bool check_alpha(std::string str)
{
	unsigned int i;

	i = 0;
	while (i < str.length())
	{
		if (isalpha(str[i]) == false)
			return (true);
		i++;
	}
	return(false);
}

bool check_number(std::string str)
{
	unsigned int i;

	i = 0;
	while (i < str.length())
	{
		if (isdigit(str[i]) == false)
			return (true);
		i++;
	}
	return (false);
}

void	PhoneBook::ADD_contact(void)
{
	std::string line = "";
	while (1)
	{
		std::cout << "enter a first name : "; 
		std::getline(std::cin, line);
		if (line != "" && check_alpha(line) == false)
		{
			this->_contacts[this->index_contact % 8].set_first_name(line);
			break;
		}
		else if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			return ;
		}
		else
		{
			std::cout << "please enter a valid name" << std::endl;
			continue;
		}
	}
	line = "";
	while (1)
	{
		std::cout << "enter a last name : "; 
		std::getline(std::cin, line);
		if (line != "" && check_alpha(line) == false)
		{
			this->_contacts[this->index_contact % 8].set_last_name(line);
			break ;
		}
		else
		{
			std::cout << "please enter a valid last name" << std::endl;
			continue;
		}
	}
	line = "";
	while (1)
	{
		std::cout << "enter a nickname : ";  
		std::getline(std::cin, line);
		if (line != "" && check_alpha(line) == false)
		{
			this->_contacts[this->index_contact % 8].set_nickname(line);
			break;
		}
		else
		{
			std::cout << "please enter a valid nickname" << std::endl;
			continue;
		}
	}
	line = "";
	while (1)
	{
		std::cout << "enter a phone number : ";  
		std::getline(std::cin, line);
		if (line != "" && check_number(line) == false)
		{
			this->_contacts[this->index_contact % 8].set_phone_number(line);
			break;
		}
		else
		{
			std::cout << "please enter a valid phone number" << std::endl;
			continue;
		}
	}
	line = "";
	while (1)
	{
		std::cout << "enter a Darkest secret : ";  
		std::getline(std::cin, line);
		if (line != "" && check_alpha(line) == false)
		{
			this->_contacts[this->index_contact % 8].set_secret(line);
			break ;
		}
		else
		{
			std::cout << "please enter a valid secret" << std::endl;
			continue;
		}
	}
	this->index_contact++;
}

void	PhoneBook::search_contact(void)
{
	int 	i = 0;
	if (index_contact == 0)
	{
		std::cout << "please add contacts first\n";
		return ;
	}
	std::cout << "\n"
	<< "----------------------------------------------\n"
	<< "|  index| first name|  last name|  nickname  |\n"
	<< "----------------------------------------------"
	<< std::endl;
	while (i < index_contact && i < 8)
	{
		std::cout << "|" << std::right << std::setw(10) << i + 1;
		std::string name = _contacts[i].get_first();
		std::string last_name = _contacts[i].get_last_name();
		std::string nickname = _contacts[i].get_nickname();
		std::cout << "|";
		if (name.length() > 10)
			std::cout << name.substr(0, 9) << ".";
		else
			std::cout << std::right << std::setw(10) << name;
		std::cout << "|";
		if (last_name.length() > 10)
			std::cout << last_name.substr(0, 9) << ".";
		else
			std::cout << std::right << std::setw(10) << last_name;
		std::cout << "|";
		if (nickname.length() > 10)
			std::cout << nickname.substr(0, 9) << ".";
		else
			std::cout << std::right << std::setw(10) << nickname;
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "----------------------------------------------" << std::endl;
	std::string line;
	int id = 0;
	line = "";
	while (1)
	{
		std::cout << "enter index:";
		std::getline(std::cin, line);
		if (line == "EXIT")
		{
			std::cout << std::endl;
			return ;
		}
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			return ;
		}
		if (line != "" && check_number(line) == false)
		{
			id = stoi(line);
			if (id > 8 || id > index_contact || id <= 0)
			{
				std::cout << "Out of range" << std::endl;
			}
			else
				break;
		}
		else if (line != "" && check_alpha(line) == false)
			std::cout << "please enter a number" << std::endl;
	}
	std::cout << std::endl;
	this->_contacts[id - 1].show_all_table();
	std::cout << std::endl;
}