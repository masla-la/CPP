#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string	_name;
		Weapon		&_weapon;

	public:

		HumanA( std::string name, Weapon &Weapon );
		~HumanA( void );
		void	attack( void );

};

#endif