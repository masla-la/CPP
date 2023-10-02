/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:32 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/02 11:48:22 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

# include <iostream>
# include <array>
# include <vector>

template<typename T>
bool	easyfind(T &t, int cmp)
{
	typename T::iterator it = std::find(t.begin(), t.end(), cmp);
	if (!*it)
		return false;
	return true;
}

#endif
