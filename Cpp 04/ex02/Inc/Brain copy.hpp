#ifndef	_BRAIN_HPP_
# define _BRAIN_HPP_

# include <iostream>
# include <string>

class	Brain
{
	protected:

		std::string	*ideas;

	public:

		Brain( void );
		Brain( Brain const & Brain );
		Brain &operator=( Brain const & obj );
		~Brain( void );
		std::string *getIdeas( void );
		std::string	get1Idea( int index );
		void	setIdeas( int index, std::string idea );

};

#endif
