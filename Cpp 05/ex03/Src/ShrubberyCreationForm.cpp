#include "../Inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	Form("ShrubberyCreationForm", false, 72, 45)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", false, 72, 45)
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &SCF):
	Form(SCF.getName(), SCF.getSigned(), SCF.getGTS(), SCF.getGTE())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	return *this;
}

void	ShrubberyCreationForm::executeForm(Bureaucrat const & executor)const
{
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
