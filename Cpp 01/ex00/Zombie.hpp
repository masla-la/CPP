/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:20:56 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:20:58 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>

class	Zombie
{
	private:

		std::string	_name;

	public:

		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif