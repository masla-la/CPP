/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:32 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:51:33 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

# include <iostream>
# include <array>

template<typename T>
bool	easyfind(T &t, int cmp)
{
	for (unsigned int i = 0; t[i]; i++)
		if (t[i] == cmp)
			return true;
	return false;
}

#endif
