#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

# include "AForm.hpp"

//class	AForm;

class	PresidentialPardonForm: public AForm
{

	private:
	
		AForm	*	_form;

	public:

		PresidentialPardonForm( void );	
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & PPF );
		~PresidentialPardonForm( void );
		PresidentialPardonForm	&operator=( PresidentialPardonForm const & obj );

};

#endif