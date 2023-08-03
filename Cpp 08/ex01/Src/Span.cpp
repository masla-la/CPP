#include "../Inc/Span.hpp"

Span::Span(void)
{
	_n = std::vector<int>();//
	_size = 0;
}

Span::Span(unsigned int n)
{
	if (n < 1)
		throw	SizeOverflowException();//
	_n = std::vector<int>(n);
	_size = n;
}

Span::Span(Span const & obj)
{
	_n = std::vector<int>(obj._size);
	_size = obj._size;
}

Span::~Span(void)
{
}

Span	&Span::operator=(Span const & obj)
{
	_n = obj._n;
	_size = obj._size;
	return *this;
}

void	Span::addNumber(unsigned int num)
{
	if (_size < 1 || _n.begin() == _n.end())
		throw	SizeOverflowException();
	_n.insert(_n.begin(), num);

	//-------
	std::vector<int>::iterator	it;
	it = _n.begin();
	for(it = _n.begin(); it < _n.end(); it++)
		std::cout << *it << std::endl;
}

unsigned int	Span::shortestSpan(void)
{
	return 0;
}

unsigned int	Span::longestSpan(void)
{
	return 0;
}

const char	*Span::SizeOverflowException::what(void)const throw()
{
	return "Size overflow";
}
