/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:22:40 by hharik            #+#    #+#             */
/*   Updated: 2022/07/29 16:14:02 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP_
# define ITER_HPP_

template <typename T>
void	iter(T *a, int length, void (*f)(const T &a))
{
	for (int i = 0; i < length; i++)
		f(a[i]);
}
#endif