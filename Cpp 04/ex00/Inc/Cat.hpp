#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "Animal.hpp"

class	Cat: public Animal
{
	protected:

		std::string type;

	public:

		Cat( void );
		Cat( std::string );
		Cat( Cat const & Cat );
		Cat &operator=( Cat const & obj );
		~Cat( void );
		std::string	getType( void );
		void	makeSound( void );

};

#endif