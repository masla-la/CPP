/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:56 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/20 09:39:34 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BITCOINEXCHANGE_HPP_
# define _BITCOINEXCHANGE_HPP_

# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <map>

class BTC
{

	private:

		std::map<std::string, float>	_data;
		void	writeAmount( std::string line, std::string val );

	public:

		BTC( void );
		BTC( BTC const & obj );
		BTC( char *file );
		BTC	& operator=( BTC const & obj );
		~BTC( void );

		void	setData( std::string file );
		void	proccessInput( char *file );

};

bool	checkInput(std::string input);
int		checkInput2(std::string input);

#endif