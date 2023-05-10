#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:

		std::string	type;
	
	public:

		WrongCat( void );
		WrongCat( std::string str );
		WrongCat( WrongCat const & WrongCat );
		WrongCat &operator=(WrongCat const & obj );
		~WrongCat( void );
		std::string	getType( void ) const;
		void	makeSound( void ) const;

};

#endif