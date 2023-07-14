#include "../Inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	_form = new AForm("ShrubberyCreationForm", false, 145, 137);
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &SCF)
{
	delete _form;
	_form = new AForm(*SCF._form);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	delete _form;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	delete _form;
	_form = new AForm(*obj._form);
	return *this;
}
