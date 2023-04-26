/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:24:32 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:24:32 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Fixed( Fixed &Fixed );
		~Fixed( void );
		Fixed &operator=( Fixed const & obj );
		int getRawBits( void )const;
		void setRawBits ( int const raw );

};

#endif
