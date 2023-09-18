/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:49:09 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:49:09 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

# include "AForm.hpp"

class	RobotomyRequestForm: public Form
{

	private:

		RobotomyRequestForm( void );

	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & RRF );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm	&operator=( RobotomyRequestForm const & obj );
		virtual void executeForm( Bureaucrat const & executor ) const;

};

#endif