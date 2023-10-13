/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:58 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/13 10:18:06 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

# include <iostream>
# include <stack>
# include <list>

template<typename T>
class MutantStack: public std::stack<T>
{

	private:

		std::stack<T>	_stack;

	public:

		MutantStack( void ): std::stack<T>()
			{  };
		MutantStack( MutantStack<T> const & obj ): std::stack<T>(obj)
			{  };
		MutantStack( unsigned int n ): std::stack<T>(n)
			{  };
		~MutantStack( void ){};

		MutantStack<T>	& operator=( MutantStack<T> const & obj )
			{ return *this = obj; };

		void			push( T const & t )
			{ std::stack<T>::push(t); };
		unsigned int	size( void )
			{ return std::stack<T>::size(); };
		T				top( void )
			{ return std::stack<T>::top(); };
		void			pop( void )
			{ return std::stack<T>::pop(); };

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin( void )
			{  return this->c.begin(); }
		iterator	end( void )
			{ return this->c.end(); }

};

#endif