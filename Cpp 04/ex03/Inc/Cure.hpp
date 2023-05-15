#ifndef _CURE_HPP_
# define _CURE_HPP_

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Cure: public AMateria
{

	public:
	
		Cure( void );
		Cure( Cure const & Cure );
		Cure &operator=( Cure const & obj );
		virtual ~Cure( void );
		virtual	void use( ICharacter &obj );
		virtual AMateria *clone( void ) const;

};

#endif
