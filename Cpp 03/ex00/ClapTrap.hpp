#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class	ClapTrap
{
	private:

		std::string	_name;
		int	_hitPoints = 10;
		int	_energyPoints = 10;
		int	_attackDamage = 0;

	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap &ClapTrap);
		~ClapTrap( void );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

};

#endif
