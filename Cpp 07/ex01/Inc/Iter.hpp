/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:05 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:51:06 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
# define _ITER_HPP_

# include <iostream>
# include <string>

template<typename T>
void	iter(T *addr, int len, void (*f)(T const&))
{
	for (int i = 0; i < len; i++)
		f(addr[i]);
}

#endif