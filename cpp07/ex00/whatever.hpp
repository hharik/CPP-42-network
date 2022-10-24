/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:41:06 by hharik            #+#    #+#             */
/*   Updated: 2022/07/29 13:28:50 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP_
#define WHATEVER_HPP_

template<typename F>
void	swap(F &first, F &second)
{
	F tmp;
	tmp = first;
	first = second;
	second = tmp;
}

template<typename F>
F	min(F first, F second)
{
	if (first < second)
		return first;
	return second;
}

template<typename F>
F	max(F first, F second)
{
	if (first > second)
		return first;
	return second;
}
#endif