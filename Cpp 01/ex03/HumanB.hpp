#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string	_name;
		Weapon		*_weapon;

	public:

		HumanB( std::string name );
		HumanB( void );
		~HumanB( void );
		void	setWeapon(Weapon &weapon);
		void	attack( void );
};

#endif