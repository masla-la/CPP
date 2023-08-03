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
		
		//unsigned int 	operator[]( unsigned int i );
		
		void			addNumber( unsigned int num );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );
		
		class	SizeOverflowException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
		
};

#endif
