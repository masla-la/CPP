/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:22:17 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:22:18 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP_
# define _HARL_HPP_

# include <iostream>
# include <string>

class	Harl
{
	private:
	
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void other( void );
	
	public:

	Harl( void );
	~Harl( void );
	void complain( std::string level );

};

#endif