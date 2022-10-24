/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:21:49 by hharik            #+#    #+#             */
/*   Updated: 2022/07/18 14:43:45 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replace(std::string filename, std::string to_find, std::string to_replace)
{
	std::ifstream indata;
	std::ofstream outdata;
	indata.open(filename); //open file
	if (!indata)
	{
		std::cout << "Error : file couldn't be opened" << std::endl;
		return (0);
	}
	outdata.open(filename + ".replace"); // open the outfile
	if (!outdata)
	{
		std::cout << "Error : file couldn't be created" << std::endl;
		return (0);
	}
	while (indata.is_open() == true && outdata.is_open() == true)
	{
		std::string line;
		while (getline(indata, line))
		{
			while (true)
			{
				size_t found = line.find(to_find, 0); // from the index 0
				if (found != std::string::npos)// means until the end of the string && it is usually used to indicate no match
				{
					line.erase(found, to_find.length());
					line.insert(found, to_replace);
				}
				else if (found == std::string::npos)
					break ;
			}
			outdata << line  + "\n";
		}
		if (indata.eof() == true)
			break;
	}
	indata.close();
	outdata.close();
	return (0);
}