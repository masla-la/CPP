#ifndef _ICE_HPP_
# define _ICE_HPP_

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Ice: public AMateria
{

	public:

		Ice( void );
		Ice( Ice const & Ice );
		Ice &operator=( Ice const & obj );
		virtual ~Ice( void );
		virtual	void use( ICharacter &obj );
		virtual AMateria *clone( void ) const;

};

#endif
