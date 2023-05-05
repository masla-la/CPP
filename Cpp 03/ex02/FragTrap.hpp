/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:00:13 by masla-la          #+#    #+#             */
/*   Updated: 2023/05/05 11:55:10 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FLAGTRAP_HPP_
# define _FLAGTRAP_HPP_

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	private:



	public:

		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( FragTrap const &FragTrap );
		FragTrap &operator=( FragTrap const & obj );
		~FragTrap( void );
		void highFivesGuys( void );

};

#endif
