#ifndef	_ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

# include "AForm.hpp"

class	RobotomyRequestForm: public AForm
{

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & RRF );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm	&operator=( RobotomyRequestForm const & obj );
		virtual void executeForm( Bureaucrat const & executor ) const;

};

#endif