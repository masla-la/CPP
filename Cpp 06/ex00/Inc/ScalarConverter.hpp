/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:49:43 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:49:45 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALARCONVERTER_HPP_
# define _SCALARCONVERTER_HPP_

# include <iostream>
# include <string>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

class ScalarConverter
{
		
	public:

		ScalarConverter( void );
		ScalarConverter( ScalarConverter const & obj );
		~ScalarConverter( void );
		ScalarConverter	&operator=( ScalarConverter const & obj );

		void	convert( std::string str );

	private:

		std::string	_type;

		void	cast( std::string str );
		void	cast_char( std::string str );
		void	cast_int( std::string str );
		void	cast_float( std::string str );
		void	cast_double( std::string str );
		void	cast_other( std::string str );

		std::string	check_cast( std::string str );
		bool	double_check( std::string str );
		bool	float_check( std::string str );
		bool	int_check( std::string str );
		bool	char_check( std::string str );
		bool	other_check( std::string str );

};



#endif