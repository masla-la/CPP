#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <iostream>
# include <string>

class	Animal
{
	protected:

		std::string type;

	public:

		Animal( void );
		Animal( std::string );
		Animal( Animal const & Animal );
		Animal &operator=( Animal const & obj );
		~Animal( void );
		std::string	getType( void );
		void	makeSound( void );


};

#endif