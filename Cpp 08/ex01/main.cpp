#include "Inc/Span.hpp"

/*int	main()
{
	Span<int>	sp(10000);

	try
	{
		std::cout << sp.shorterSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < 9000; i++)
		sp.addNumber(10);
	sp.addNumber(20);
	sp.addNumber(1);
	sp.addNumber(50);
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << sp[2000] << '\n';
	return 0;
}*/

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
