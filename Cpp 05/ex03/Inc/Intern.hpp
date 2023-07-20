#ifndef _INTERN_HPP_
# define _INTERN_HPP_

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

	private:


	public:

		Intern( void );
		Intern( Intern const & Inter );
		~Intern( void );
		Intern	&operator=( Intern const & obj );

		Form	*makeForm( std::string name, std::string target );

		class	DoesExistFormException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};

};


#endif