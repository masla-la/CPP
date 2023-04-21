#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add_fname(void)
{
	std::string	str;

	while (str == "")
	{
		std::cout << "Enter a First Name: ";
		if (std::getline(std::cin, str))
			this->contact[this->index].set_fname(str);
	}
}

void	PhoneBook::add_lname(void)
{
	std::string	str;

	while (str == "")
	{
		std::cout << "Enter a Last Name: ";
		if (std::getline(std::cin, str))
			this->contact[this->index].set_lname(str);
	}
}

void	PhoneBook::add_nick(void)
{
	std::string	str;

	while (str == "")
	{
		std::cout << "Enter a Nickname: ";
		if (std::getline(std::cin, str))
			this->contact[this->index].set_nick(str);
	}
}

void	PhoneBook::add_number(void)
{
	std::string	str;

	while (str == "")
	{
		std::cout << "Enter a Phone Number: ";
		if (std::getline(std::cin, str))
			this->contact[this->index].set_number(str);
	}
}

void	PhoneBook::add_secret(void)
{
	std::string	str;

	while (str == "")
	{
		std::cout << "Enter a Darkest Secret: ";
		if (std::getline(std::cin, str))
			this->contact[this->index].set_secret(str);
	}
}


void	PhoneBook::add(void)
{
	this->add_fname();
	this->add_lname();
	this->add_nick();
	this->add_number();
	this->add_secret();
	this->index++;
	if (this->index == 8)
		this->index = 0;
}

void	PhoneBook::search(void)
{
	std::string	str;

	if (!print_all())
	{
		std::cout << "Empty" << std::endl;
		return ;
	}
	std::cout << "Index: ";
	std::getline(std::cin, str);
	if (str[0] >= '1' && str[0] <= '8' && str.size() == 1)
		print_contact((str[0] - '0') - 1);
	else
		std::cout << "Incorrect Index" << std::endl;
}

void	PhoneBook::print_contact(int index)
{
	if (!this->contact[index].get_fname().size())
	{
		std::cout << "Empty Contact" << std::endl;
		return ;
	}
	std::cout << "First Name -> ";
	std::cout << this->contact[index].get_fname() << std::endl;
	std::cout << "Last Name -> ";
	std::cout << this->contact[index].get_lname() << std::endl;
	std::cout << "Nickname -> ";
	std::cout << this->contact[index].get_nick() << std::endl;
	std::cout << "Phone Number -> ";
	std::cout << this->contact[index].get_number() << std::endl;
	std::cout << "Darkest Secret -> ";
	std::cout << this->contact[index].get_secret() << std::endl;
}

std::string	space(std::string str)
{
	int	i;

	i = 0;
	while (str.size() + i < 10)
	{
		std::cout << " ";
		i++;
	}
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

int	PhoneBook::print_all(void)
{
	int			i;
	std::string	str;

	if (!this->contact[0].get_fname().size())
		return (0);
	std::cout << "|";
	std::cout << space("Index");
	std::cout << "|";
	std::cout << space("First Name");
	std::cout << "|";
	std::cout << space("Last Name");
	std::cout << "|";
	std::cout << space("Nickname");
	std::cout << "|" << std::endl;
	i = 0;
	str = "0";
	while (i < 8 && this->contact[i].get_fname().size())
	{
		str[0] += 1;
		std::cout << "|";
		std::cout << space(str);
		std::cout << "|";
		std::cout << space(this->contact[i].get_fname());
		std::cout << "|";
		std::cout << space(this->contact[i].get_lname());
		std::cout << "|";
		std::cout << space(this->contact[i].get_nick());
		std::cout << "|" << std::endl;
		i++;
	}
	return (i);
}
