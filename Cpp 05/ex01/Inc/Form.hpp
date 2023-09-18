/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:48:03 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:48:03 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{

	private:

		std::string	const	_name;
		bool				_signed;
		const	int			_gradeTooSign;
		const	int			_gradeTooExec;
		Form( void );

	public:

		Form( std::string name, bool sign, const int gradeTooSign, const int gradeTooExec );
		Form( Form const & Form);
		Form &operator=( Form const & obj);
		~Form( void );

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getGTS( void ) const;
		const	int	getGTE( void ) const;

		void	beSigned( Bureaucrat & obj );

		class	GradeTooHighException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
		
};

std::ostream	&operator<<( std::ostream &  ost, Form & obj );

#endif
