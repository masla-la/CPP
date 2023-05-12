#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:

		std::string	type;
	
	public:

		WrongAnimal( void );
		WrongAnimal( std::string str );
		WrongAnimal( WrongAnimal const & WrongAnimal );
		WrongAnimal &operator=(WrongAnimal const & obj );
		virtual ~WrongAnimal( void );
		std::string	getType( void ) const;
		void	makeSound( void ) const;

};

#endif
