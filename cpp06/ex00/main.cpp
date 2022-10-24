/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:29:02 by hharik            #+#    #+#             */
/*   Updated: 2022/07/28 12:20:05 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main( int argc, char **argv)
{
	if (argc == 2)
	{
		std::string to_convert = std::string(argv[1]);
		convertToChar(to_convert);
		convertToInt(to_convert);
		convertToFloat(to_convert);
		convertToDouble(to_convert);
	}
	else
	{
		std::cout << "Please enter valide arguments" << std::endl;
	}
}