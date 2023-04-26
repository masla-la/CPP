/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:34 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:21:59 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string	_name;
		Weapon		*_weapon;

	public:

		HumanB( std::string name );
		HumanB( void );
		~HumanB( void );
		void	setWeapon(Weapon &weapon);
		void	attack( void );
};

#endif