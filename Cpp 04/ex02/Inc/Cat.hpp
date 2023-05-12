#ifndef _CAT_HPP_
# define _CAT_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{
	private:

		std::string	type;
		Brain		*brain;

	public:

		Cat( void );
		Cat( std::string str );
		Cat( Cat const & Cat );
		Cat &operator=( Cat const & obj );
		~Cat( void );
		std::string	getType( void ) const;
		void makeSound( void ) const;
		Brain *getBrain( void ) const;

};

#endif
