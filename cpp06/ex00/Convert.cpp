/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:18:33 by hharik            #+#    #+#             */
/*   Updated: 2022/07/30 10:58:17 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	convertToChar(std::string to_convert)
{
	int ch;
	try
	{
		ch = std::stoi(to_convert);	
	}
	catch(const std::exception& e)
	{
		std::cout << "Char : Impossible" << '\n';
		return ;
	}
	char c = static_cast<char> (ch);
	if (std::isprint(c))
		std::cout << "Char : '" << c << "'" << std::endl;
	else
		std::cout << "Char : Non displayable" << std::endl;

}

void	convertToInt(std::string to_convert)
{
	int num;
	try
	{
		num = std::stoi(to_convert);	
	}
	catch(const std::exception& e)
	{
		std::cout << "Int : Impossible" << std::endl;
		return ;
	}
	std::cout << "Int : " << num << std::endl; 	
}

void	convertToFloat(std::string to_convert)
{
	try
	{
		std::string pseudo[3] = {"-inff", "+inff", "nanf"};
		for (int i = 0; i < 3; i++)
		{
				if(to_convert == pseudo[i])
				{
					std::cout << "Float : " << pseudo[i] << std::endl;
					return ;
				}
		}
	float num = std::stof(to_convert);
	//if the float of the numbe is the same as the typecast of it in int u have to add to it .0f
	if (num != static_cast<int>(num))
		std::cout << "Float : " << num << "f" << std::endl;
	else
		std::cout << "Float : " << num << ".0f" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cout << "Float : Impossible" << std::endl;
		return ;
	}
	
}

void	convertToDouble(std::string to_convert)
{
	double num;
	try
	{
		std::string pseudo[3] = {"-inff", "+inff" , "nanf"};
		for(int i = 0; i < 3; i++)
			if(pseudo[i] == to_convert)
			{
				std::cout << "Double : " << pseudo[i] << std::endl;
				return ;
			}
		num = std::stod(to_convert);
		if (num != static_cast<int>(num))
			std::cout << "Double : " << num << std::endl;
		else
			std::cout << "Double : " << num << ".0" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "double : Impossible" << std::endl;
	}
}
