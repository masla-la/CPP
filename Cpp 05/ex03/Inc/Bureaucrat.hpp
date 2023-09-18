/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:49:01 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 09:49:02 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>
# include <string>
# include "AForm.hpp"

class	Form;

class	Bureaucrat
{

	private:

		std::string const	_name;
		int			_grade;
		Bureaucrat( void );

	public:

		Bureaucrat( std::string const & name, int grade );
		Bureaucrat( Bureaucrat const & Bureaucrat );
		Bureaucrat	&operator=( Bureaucrat const & obj);
		~Bureaucrat( void );

		std::string	const getName( void ) const;
		int			getGrade( void ) const;

		void	GradeInc( void );
		void	GradeInc( int num );
		void	GradeDec( void );
		void	GradeDec( int num );

		void	signForm( Form & obj );

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

	std::ostream	&operator<<( std::ostream &  ost, Bureaucrat & obj );

#endif
