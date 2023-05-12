#ifndef _ICHARACTER_HPP_
# define _ICHARACTER_HPP_

# include <iostream>
# include <string>

# include "AMateria.hpp"

class AMateria;

class ICharacter
{

	protected:

		AMateria const *Inventory;

	public:
		ICharacter( void );
		ICharacter( ICharacter const & ICharacter );
		ICharacter &operator=( ICharacter const & obj );
		
		virtual ~ICharacter( void ) {}
		virtual std::string const & getName( void ) const = 0;
		virtual void equip( AMateria* m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter& target ) = 0;

};

#endif