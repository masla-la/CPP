/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:55:06 by masla-la          #+#    #+#             */
/*   Updated: 2023/05/05 11:48:31 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	private:

		bool	_protect;

	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const &ScavTrap );
		ScavTrap &operator=( ScavTrap const &ScavTrap );
		~ScavTrap( void );
		void attack( const std::string& target );
		void guardGate( void );

};

#endif
