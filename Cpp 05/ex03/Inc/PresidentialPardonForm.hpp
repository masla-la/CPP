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