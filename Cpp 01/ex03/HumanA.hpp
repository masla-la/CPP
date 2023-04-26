/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:29 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:22:01 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string	_name;
		Weapon		&_weapon;

	public:

		HumanA( std::string name, Weapon &Weapon );
		~HumanA( void );
		void	attack( void );

};

#endif