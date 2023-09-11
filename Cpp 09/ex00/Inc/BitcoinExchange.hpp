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

		void	setData( char *file );
		void	proccessInput( char *file );

};

bool	checkInput(std::string input);

#endif