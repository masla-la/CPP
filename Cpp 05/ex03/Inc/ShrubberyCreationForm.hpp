/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:49:11 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:49:12 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_

# include "AForm.hpp"

class	ShrubberyCreationForm: public Form
{

	private:

		ShrubberyCreationForm( void );

	public:

		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & SCF );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm	&operator=( ShrubberyCreationForm const & obj );
		virtual void executeForm( Bureaucrat const & executor ) const;

};

#endif 