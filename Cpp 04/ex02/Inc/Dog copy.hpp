#ifndef _DOG_HPP_
# define _DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	private:

		std::string	type;
		Brain		*brain;

	public:

		Dog( void );
		Dog( std::string str );
		Dog( Dog const & Dog );
		Dog &operator=( Dog const & obj );
		~Dog( void );
		std::string	getType( void ) const;
		void	makeSound( void ) const;
		Brain *getBrain( void ) const;
		std::string getIdea( int index );
		void	setIdea( int index, std::string idea );

};

#endif
