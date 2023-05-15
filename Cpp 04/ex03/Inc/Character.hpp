#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include "ICharacter.hpp"

class Character: public ICharacter
{

	private:

		std::string name;
		AMateria *(Inventory[4]);

	public:

		Character( void );
		Character( std::string const name );
		Character( Character const & Character );
		Character &operator=( Character const & obj );
		
		virtual ~Character( void );
		virtual std::string const & getName( void ) const;
		virtual void equip( AMateria* m );
		virtual void unequip( int idx );
		virtual void use( int idx, ICharacter& target );

		AMateria *(Floor[20]);

};

#endif
