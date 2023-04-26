/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:24:47 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:24:47 by masla-la         ###   ########.fr       */
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
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};
	
	std::ostream &operator<<( std::ostream &ost, Fixed const & obj );

#endif
