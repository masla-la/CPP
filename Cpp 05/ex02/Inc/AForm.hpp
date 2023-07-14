#ifndef _AFORM_HPP_
# define _AFORM_HPP_

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{

	private:

		std::string	const	_name;
		bool				_signed;
		const	int			_gradeTooSign;
		const	int			_gradeTooExec;

	public:

		AForm( void );
		AForm( std::string name, bool sign, const int gradeTooSign, const int gradeTooExec );
		AForm( AForm const & AForm);
		AForm &operator=( AForm const & obj);
		~AForm( void );

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

		virtual void execute(Bureaucrat const & executor) const;
		
};

std::ostream	&operator<<( std::ostream &  ost, AForm & obj );

#endif
