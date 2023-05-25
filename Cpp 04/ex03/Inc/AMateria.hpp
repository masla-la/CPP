#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

# include <iostream>
# include <string>

# include "Character.hpp"
# include "MateriaSource.hpp"

class Charater;
class ICharacter;
class MateriaSource;
class IMateriaSource;

class AMateria
{

	protected:

		std::string type;

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & AMateria );
		AMateria &operator=( AMateria const & obj);
		virtual ~AMateria( void );

		std::string const & getType( void ) const;
		virtual AMateria* clone( void ) const = 0;
		virtual void use( ICharacter& target );

};

#endif
