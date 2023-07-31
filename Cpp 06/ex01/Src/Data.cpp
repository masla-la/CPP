# include "../Inc/Data.hpp"

Data::Data(void): _data("Default")
{
}

Data::Data(Data const &obj): _data(obj.getData())
{
}

Data	&Data::operator=(Data const &obj)
{
	setData(obj.getData());
	return *this;
}

Data::~Data(void)
{
}

std::string	Data::getData(void)const
{
	return _data;
}

void	Data::setData(std::string ptr)
{
	_data = ptr;
}
