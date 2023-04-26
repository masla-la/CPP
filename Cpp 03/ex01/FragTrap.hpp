/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:00:13 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 11:01:07 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FLAGTRAP_HPP_
# define _FLAGTRAP_HPP_

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap
{
	private:

		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;

	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap &FragTrap);
		~FragTrap( void );
		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		void highFivesGuys( void );

};

#endif
