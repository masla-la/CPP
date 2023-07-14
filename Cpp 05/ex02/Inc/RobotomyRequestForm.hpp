#ifndef	_ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

# include "AForm.hpp"

//class	AForm;

class	RobotomyRequestForm: public AForm
{

	private:

		AForm	*	_form;

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & RRF );
		~RobotomyRequestForm( void );
		RobotomyRequestForm	&operator=( RobotomyRequestForm const & obj );
		virtual void execute(Bureaucrat const & executor) const

};

#endif