#ifndef	_MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"


class MateriaSource: public IMateriaSource
{

	private:

		AMateria	*(MateriaCopy[4]);

	public:
	
		MateriaSource( void );
		MateriaSource( MateriaSource const & MateriaSource );
		MateriaSource &operator=( MateriaSource const & MateriaSource );

		virtual ~MateriaSource( void );
		virtual void learnMateria( AMateria* );
		virtual AMateria* createMateria( std::string const & type );

};

#endif
