#ifndef _PMERGE_HPP_
# define _PMERGE_HPP_

# include <iostream>
# include <string>
# include <vector>
# include <array>

class Pmerge
{

	private:

		std::vector<int>	_vec;
		//std::array<int, 3000>		_arr;

	public:

		Pmerge( void );
		Pmerge( Pmerge const & obj );
		Pmerge( char *av );
		~Pmerge( void );
		Pmerge	&operator=( Pmerge const & obj );

		void	shortVec( void );

};

#endif