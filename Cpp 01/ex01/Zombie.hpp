/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:11 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:21:16 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>

class	Zombie
{
	private:

		std::string	_name;

	public:

		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	set_name( std::string name );
		void	announce( void );
};

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );

#endif