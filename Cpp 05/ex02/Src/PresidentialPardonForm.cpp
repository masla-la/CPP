#include "../Inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	std::ofstream	fd(target + "_shrubbery");
	
	_form = new AForm("PresidentialPardonForm", false, 145, 137);
	fd << "ASCII TREE" << std::endl;
	fd.close();
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &PPF)
{
	delete _form;
	_form = new AForm(*PPF._form);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	delete _form;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	delete _form;
	_form = new AForm(*obj._form);
	return *this;
}
