/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:33 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/18 13:09:34 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PMERGE_HPP_
# define _PMERGE_HPP_

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <ctime>

class Pmerge
{

	private:

		std::vector<int>	_vec;
		std::vector<int>	_cpy;
		std::deque<int>		_deq;
		long long		_deqTime;
		long long		_vecTime;
		bool			_err;

	public:

		Pmerge( void );
		Pmerge( Pmerge const & obj );
		Pmerge( char *av );
		~Pmerge( void );
		Pmerge	&operator=( Pmerge const & obj );

		void	shortVec( void );
		void	shortDeq( void );
		void	printStacks( void );

};

#endif