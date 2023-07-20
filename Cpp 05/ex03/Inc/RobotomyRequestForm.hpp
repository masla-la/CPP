#ifndef	_ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

# include "AForm.hpp"

class	RobotomyRequestForm: public Form
{

	private:

		RobotomyRequestForm( void );

	public:

		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & RRF );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm	&operator=( RobotomyRequestForm const & obj );
		virtual void executeForm( Bureaucrat const & executor ) const;

};

#endif