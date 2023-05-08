#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"

class	Dog: public Animal
{
	protected:

		std::string type;

	public:

		Dog( void );
		Dog( std::string );
		Dog( Dog const & Dog );
		Dog &operator=( Dog const & obj );
		~Dog( void );
		std::string	getType( void );
		void	makeSound( void );

};

#endif