#ifndef _HARL_HPP_
# define _HARL_HPP_

# include <iostream>
# include <string>

class	Harl
{
	private:
	
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void other( void );
	
	public:

	Harl( void );
	~Harl( void );
	void complain( std::string level );

};

#endif