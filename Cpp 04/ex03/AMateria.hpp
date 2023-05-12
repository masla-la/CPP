#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	protected:

		std::string const &type;

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria &operator=( AMateria const & obj);
		~AMateria( void );

		std::string const & getType( void ) const; //Returns the materia type
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );

};

#endif
