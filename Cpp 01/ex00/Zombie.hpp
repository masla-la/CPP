#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>

class	Zombie
{
	private:

		std::string	_name;

	public:

		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif