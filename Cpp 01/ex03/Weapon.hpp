#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>
# include <string>

class	Weapon
{
	private:

		std::string	_type;

	public:

		Weapon( std::string name );
		Weapon( void );
		~Weapon( void );
		std::string const	&getType( void );
		void	setType( std::string type );
};

#endif