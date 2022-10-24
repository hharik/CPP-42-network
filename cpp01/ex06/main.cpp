/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:31:41 by hharik            #+#    #+#             */
/*   Updated: 2022/07/16 21:02:31 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string user_level = std::string(argv[1]);
		std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
		std::string level_lower[4] = {"debug", "info", "warning", "error"};
		Harl h;
		int index;
		for (int i = 0; i < 4; i++)
		{
			if (user_level == level[i] || user_level == level_lower[i])
				index = i + 1;
		}
		switch (index)
		{
			case 1:
				h.complain("debug");
				h.complain("info");
				h.complain("warning");
				h.complain("error");
				break;
			case 2:
				h.complain("info");
				h.complain("warning");
				h.complain("error");
				break;
			case 3:
				h.complain("warning");
				h.complain("error");
				break;
			case 4:
				h.complain("error");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
	else
	{
		std::cout << "Not valide arguments" << std::endl;
	}
}