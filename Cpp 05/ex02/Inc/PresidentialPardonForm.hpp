#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
{

	public:

		PresidentialPardonForm( void );	
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & PPF );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm	&operator=( PresidentialPardonForm const & obj );
		virtual void executeForm( Bureaucrat const & executor ) const;

};

#endif