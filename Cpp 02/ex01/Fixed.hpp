#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>

class	Fixed
{
	private:

			int					_i;
			static const int	_n = 8;

	public:

		Fixed( void );
		Fixed( Fixed &Fixed) ;
		Fixed( int const i );
		Fixed( float const i );
		~Fixed( void );
		Fixed &operator=( const Fixed & obj );
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif
