#include "../Inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	_type = obj._type;
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &obj)
{
	_type = obj._type;
	return *this;
}

void	ScalarConverter::convert(std::string str)
{
	_type = check_cast(str);
	cast(str);
}

void	ScalarConverter::cast(std::string str)
{
	std::string	cmp[5] = { "CHAR", "INT", "DOUBLE", "FLOAT", "OTHER" };
	int			i = 0;

	while (cmp[i] != _type)
		i++;
	switch (i)
	{
		case 0:
			cast_char(str);
			break;

		case 1:
			cast_int(str);
			break;
		
		case 2:
			cast_float(str);
			break;
	
		case 3:
			cast_double(str);
			break;
	
		case 4:
			cast_other(str);
			break;

		default:
			break;
	}
}

void	ScalarConverter::cast_char(std::string str)
{
	char	dest = str[0];

	std::cout << "< CHAR >" << std::endl;
	if (dest > 32 && dest < 127)
		std::cout << "char: '" << dest << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(dest) << std::endl;
	std::cout << "foat: " << static_cast<float>(dest) << std::endl;
	std::cout << "double: " << static_cast<double>(dest) << std::endl;
}

void	ScalarConverter::cast_int(std::string str)
{
	double	dest = stod(str);

	std::cout << "< INT >" << std::endl;
	if (dest < 0 || dest > 255)
		std::cout << "char: Overflow" << std::endl;
	else if (dest > 32 && dest < 127)
		std::cout << "char: '" << static_cast<char>(dest) << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (static_cast<double>(dest) < MIN_INT || static_cast<double>(dest) > MAX_INT)
		std::cout << "int: Imposible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(dest) << std::endl;
	std::cout << "foat: " << static_cast<float>(dest) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(dest) << std::endl;
}

void	ScalarConverter::cast_float(std::string str)
{
	float	dest = stof(str);

	std::cout << "< FLOAT >" << std::endl;
	if (dest < 0 || dest > 255)
		std::cout << "char: Overflow" << std::endl;
	if (dest > 32 && dest < 127)
		std::cout << "char: '" << static_cast<char>(dest) << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(dest) << std::endl;
	std::cout << "foat: " << dest << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(dest) << std::endl;
}

void	ScalarConverter::cast_double(std::string str)
{
	double	dest = stod(str);

	std::cout << "< DOUBLE >" << std::endl;
	if (dest > 32 && dest < 127)
		std::cout << "char: '" << static_cast<char>(dest) << '\'' << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (static_cast<double>(dest) < MIN_INT || static_cast<double>(dest) > MAX_INT)
		std::cout << "int: Imposible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(dest) << std::endl;
	std::cout << "foat: " << static_cast<float>(dest) << 'f' << std::endl;
	std::cout << "double: " << dest << std::endl;
}

void	ScalarConverter::cast_other(std::string str)
{
	double	dest = stod(str);
	std::cout << "< OTHER >" << std::endl;
	std::cout << "char: Imposible" << std::endl;
	std::cout << "int: Imposible" << std::endl;
	std::cout << "float: " << static_cast<float>(dest);
	if (str == "nan" || str == "nanf")
		std::cout << 'f';
	std::cout << std::endl;
	std::cout << "double: " << dest << std::endl;
}

std::string	ScalarConverter::check_cast(std::string str)
{
	if (other_check(str))
		return "OTHER";
	else if (int_check(str))
		return "INT";
	else if (float_check(str))
		return "FLOAT";
	else if (double_check(str))
		return "DOUBLE";
	else if (char_check(str))
		return "CHAR";
	return NULL;
}

bool	ScalarConverter::double_check(std::string str)
{
	bool	b;

	b = false;
	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return false;
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (int i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (i == str.length() - 1)
				return (str[i] = 'f');
			if (str[i] == '.')
			{
				if (b == true)
					return false;
				b = true;
			}
			else
				return false;
		}
	}
	return true;
}

bool	ScalarConverter::float_check(std::string str)
{
	bool	b;

	b = false;
	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return false;
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (int i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (i == str.length() - 1)
				return (str[i] = 'f');
			if (str[i] == '.')
			{
				if (b == true)
					return false;
				b = true;
			}
			else
				return false;
		}
	}
	return true;
}

bool	ScalarConverter::int_check(std::string str)
{
	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return false;
	if ((str[0] == '+' || str[0] == '-') && str.length() <= 1)
		return (false);
	for (int i = 1; i < str.length(); i++)
		if (!isdigit(str[i]))
			return false;
	return true;
}

bool	ScalarConverter::char_check(std::string str)
{
	if (str.length() > 1)
		return false;
	return true;
}

bool	ScalarConverter::other_check(std::string str)
{
	if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf" || str == "inf")
		return true;
	return false;
}
