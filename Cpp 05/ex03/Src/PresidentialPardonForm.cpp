#include "../Inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	Form("PresidentialPardonForm", false, 145, 137)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", false, 145, 137)
{
	std::ofstream	fd(target + "_shrubbery");

	fd << "ASCII TREE" << std::endl;
	fd.close();
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PPF):
	Form(PPF.getName(), PPF.getSigned(), PPF.getGTS(), PPF.getGTE())
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	return *this;
}

void	PresidentialPardonForm::executeForm(Bureaucrat const & executor)const
{
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}
