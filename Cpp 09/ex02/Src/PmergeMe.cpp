#include "../Inc/PmergeMe.hpp"

Pmerge::Pmerge(void)
{
}

Pmerge::Pmerge(Pmerge const &obj)
{
	_vec = obj._vec;
	//_arr = obj._arr;
}

Pmerge::Pmerge(char *av)
{
	for	(unsigned int i = 0; av[i]; i++)
	{
		if (isdigit(av[i]))
		{
			_vec.insert(_vec.begin(), av[i] - '0');
		}
	}
}

Pmerge::~Pmerge(void)
{
}

Pmerge	&Pmerge::operator=(Pmerge const &obj)
{
	_vec = obj._vec;
	//_arr = obj._arr;
	return *this;
}

void	Pmerge::shortVec(void)
{
	std::vector<int>	b;
	unsigned int		n = 0;
	//std::vector<int>	c;

	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		if (_vec[i] < _vec[n])
		{
			n = i;
			while (n > 0 && _vec[n] > _vec[i])
			{
				n--;
			}
			for (unsigned int z = i; z > n; z--)
			{
				b[0] = _vec[z];
				_vec[z] = _vec[i];
				_vec[i] = b[0];
			}
		}
	}
	std::cout << "123\n";
	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		std::cout << _vec.at(i)<< std::endl;
	}
}
