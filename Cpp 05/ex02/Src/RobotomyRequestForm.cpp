#include "../Inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	_form = new AForm("RobotomyRequestForm", false, 145, 137); 
	srand((unsigned)time(NULL));
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &RRF)
{
	delete _form;
	_form = new AForm(*RRF._form);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	delete _form;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	delete _form;
	_form = new AForm(*obj._form);
	return *this;
}
