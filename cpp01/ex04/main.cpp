/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:35:09 by hharik            #+#    #+#             */
/*   Updated: 2022/07/17 11:23:24 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = std::string(argv[1]);
		std::string to_find = std::string(argv[2]);
		std::string to_replace = std::string(argv[3]);
		if (replace(filename, to_find, to_replace) == 0)
			return (0);
	}
	std::cout << "please enter valide arguments" << std::endl;
}	