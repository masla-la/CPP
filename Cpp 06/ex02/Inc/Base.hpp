/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:25 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:50:25 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
# define _BASE_HPP_

# include <iostream>

class	Base
{

	public:

		virtual	~Base( void );

};

class	A: public Base
{
};

class	B: public Base
{
};

class	C: public Base
{
};

Base	*generate( void );
void	identify( Base * p );
void	identify( Base & p );

#endif