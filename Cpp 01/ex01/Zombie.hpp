#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>

class	Zombie
{
	private:

		std::string	_name;

	public:

		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	set_name( std::string name );
		void	announce( void );
};

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );

#endif