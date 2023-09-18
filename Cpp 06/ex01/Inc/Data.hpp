/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:02 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:50:03 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DATA_HPP_
# define _DATA_HPP_

# include <iostream>
# include <string>

class Data
{

	private:

		std::string	_data;

	public:

		Data( void );
		Data( std::string str );
		Data( Data const & obj );
		Data	&operator=( Data const & obj );
		~Data( void );

		std::string	getData( void )const;
		void	setData( std::string str );

};

#endif
