#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>
# include <string>
# include "AForm.hpp"

class	AForm;

class	Bureaucrat
{

	private:

		std::string const	_name;
		int			_grade;

	public:

		Bureaucrat( void );
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

		void	signForm( AForm & obj );

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
