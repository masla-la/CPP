/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:41 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:21:56 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>
# include <string>

class	Weapon
{
	private:

		std::string	_type;

	public:

		Weapon( std::string name );
		Weapon( void );
		~Weapon( void );
		std::string const	&getType( void );
		void	setType( std::string type );
};

#endif