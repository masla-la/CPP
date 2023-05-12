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
		Animal( std::string str );
		Animal( Animal const & Animal );
		Animal &operator=( Animal const & obj );
		virtual ~Animal( void ) = 0;
		virtual std::string	getType( void ) const;
		virtual void	makeSound( void ) const;


};

#endif