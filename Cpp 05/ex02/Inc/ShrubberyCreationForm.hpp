#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_

# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{

	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & SCF );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm	&operator=( ShrubberyCreationForm const & obj );
		virtual void executeForm( Bureaucrat const & executor ) const;

};

#endif 