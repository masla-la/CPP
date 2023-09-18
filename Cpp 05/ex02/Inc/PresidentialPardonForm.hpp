/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:48:27 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:48:28 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

# include "AForm.hpp"

class	PresidentialPardonForm: public Form
{

	private:

		PresidentialPardonForm( void );	

	public:

		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & PPF );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm	&operator=( PresidentialPardonForm const & obj );
		virtual void executeForm( Bureaucrat const & executor ) const;

};

#endif