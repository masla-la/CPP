/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:48:59 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:48:59 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AFORM_HPP_
# define _AFORM_HPP_

# include <iostream>
# include <string>
# include <fstream>
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
		virtual	~Form( void );

		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getGTS( void ) const;
		const	int	getGTE( void ) const;

		void	beSigned( Bureaucrat & obj );
		virtual void 	execute(Bureaucrat const & executor) const;
		virtual void executeForm( Bureaucrat const & executor ) const = 0;

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

		class	NoSignedException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
		
};

std::ostream	&operator<<( std::ostream &  ost, Form & obj );

#endif
