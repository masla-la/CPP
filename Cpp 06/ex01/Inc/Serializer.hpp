/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:06 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:50:08 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
