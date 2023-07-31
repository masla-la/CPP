#ifndef _SERIALIZER_HPP_
# define _SERIALIZER_HPP_

# include <iostream>
# include <string>
# include "Data.hpp"

class Serializer
{

	private:

		Serializer( void );
		Serializer( Serializer const & obj );
		Serializer	&operator=( Serializer const & obj );
		~Serializer( void );

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif
