/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:42 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/27 11:19:22 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

# include <iostream>
# include <vector>

class Span
{

	private:

		std::vector<int>	_n;
		unsigned int	_size;

	public:

		Span( void );
		Span( unsigned int n );
		Span( Span const & obj );
		~Span( void );

		Span			&operator=( Span const & obj );
		
		unsigned int 	operator[]( unsigned int i );
		
		void			addNumber( unsigned int num );
		unsigned int	shorterSpan( void );
		unsigned int	longestSpan( void );
		
		class	SizeOverflowException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
		
		class	ShorterException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
		
		class	LongestException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
		
		
};

#endif
