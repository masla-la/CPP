/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Num.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:39 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:50:40 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NUM_HPP_
# define _NUM_HPP_

# include <iostream>
# include <string>

template<typename T>
void	swap(T a, T b)
{
	T	c;
	c = a;
	a = b;
	b = c;
}

template<typename T>
T	min(T a, T b)
{
	if (a != b)
		return (a < b) ? a : b;
	return b;
}

template<typename T>
T	max(T a, T b)
{
	if (a != b)
		return (a > b) ? a : b;
	return  b;
}

#endif