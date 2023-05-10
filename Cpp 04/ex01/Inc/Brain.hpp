#ifndef	_BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>
# include <string>

class	Brain
{
	protected:

		std::string	_ideas[100];

	public:

		Brain( void );
		Brain( Brain const & Brain );
		Brain &operator=( Brain const & obj );
		~Brain( void );

};

#endif