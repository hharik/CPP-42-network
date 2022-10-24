/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:03:34 by hharik            #+#    #+#             */
/*   Updated: 2022/06/18 14:56:16 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void 	Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void	Contact::set_secret(std::string str)
{
	this->darkest_secret = str;
}

std::string Contact::get_first(void) const
{
	return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->last_name);
}
std::string Contact::get_nickname(void) const
{
	return (this->nickname);
}
std::string Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

void	Contact::show_all_table(void)
{
	std::cout << "# information about the user #";
	std::cout << "\nName :             " << this->get_first();
	std::cout << "\nLast Name :        " << this->get_last_name();
	std::cout << "\nNickname :         " << this->get_nickname();
	std::cout << "\nPhone Number:      " << this->get_phone_number();
	std::cout << "\nDarkest secret:    " << this->get_darkest_secret();
}