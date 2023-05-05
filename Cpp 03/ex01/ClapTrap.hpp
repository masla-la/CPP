/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:24:20 by masla-la          #+#    #+#             */
/*   Updated: 2023/05/05 11:11:51 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:

		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public:

		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const &ClapTrap );
		ClapTrap &operator=( ClapTrap const & obj );
		~ClapTrap( void );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

};

#endif
