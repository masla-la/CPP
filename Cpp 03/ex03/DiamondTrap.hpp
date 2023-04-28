#ifndef _DIAMONDTRAP_HPP_
# define _DIAMONDTRAP_HPP_

# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class	DiamondTrap: public FragTrap, ScavTrap
{

	private:

		std::string	_name;
	
	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &DiamondTrap );
		~DiamondTrap( void );
		void attack( const std::string &target ); 
		void whoAmI( void );
};

#endif