/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:01:43 by hharik            #+#    #+#             */
/*   Updated: 2022/07/28 15:04:31 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SEARIALIZATION_HPP_
# define SEARIALIZATION_HPP_

#include <cstdint>
#include <iostream>

struct Data
{
	int n;
	char c;
	float f;
};

uintptr_t serialize(Data* ptr);
Data *desirialize(uintptr_t raw);

#endif