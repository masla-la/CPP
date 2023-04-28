/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:24:53 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/28 11:58:54 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

#include <iostream>
#include <cmath>

class	Fixed
{
	private:

			int					_i;
			static const int	_n = 8;

	public:

		Fixed( void );
		Fixed( Fixed const &Fixed);
		Fixed( int const i );
		Fixed( float const i );
		~Fixed( void );

		Fixed &operator=( Fixed const & obj );
		int	operator<( Fixed const & obj )const;
		int	operator>( Fixed const & obj )const;
		int	operator<=( Fixed const & obj )const;
		int	operator>=( Fixed const & obj )const;
		int	operator==( Fixed const & obj )const;
		int	operator!=( Fixed const & obj )const;
		Fixed operator+( Fixed const & obj )const;
		Fixed operator-( Fixed const & obj )const;
		Fixed operator*( Fixed const & obj )const;
		Fixed operator/( Fixed const & obj )const;
		Fixed &operator++( void );
		Fixed operator++( int );
		Fixed &operator--( void );
		Fixed operator--( int );
		static Fixed	const max( Fixed const &obj1, Fixed const &obj2 );
		static Fixed	&max( Fixed &obj1, Fixed &obj2 );
		static Fixed	const min( Fixed const &obj1, Fixed const &obj2 );
		static Fixed	&min( Fixed &obj1, Fixed &obj2 );


		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
	
	std::ostream &operator<<( std::ostream &ost, Fixed const & obj );

#endif
