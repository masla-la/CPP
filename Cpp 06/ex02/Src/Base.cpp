/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:27 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:50:28 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/Base.hpp"

Base::~Base(void)
{
}

Base	*generate(void)
{
	srand((unsigned)time(NULL));
	switch (rand() % 3)
	{
		case 0:
			return dynamic_cast<Base *>(new A);
		case 1:
			return dynamic_cast<Base *>(new B);
		case 2:
			return dynamic_cast<Base *>(new C);
		default:
			std::cout << "Error" << std::endl;
			return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		return ;
}

void	identify(Base &p)
{
	Base	tmp;
	try
	{
		tmp = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
	try
	{
		tmp = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (const std::exception& e)
	{
	}	
	try
	{
		tmp = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (const std::exception& e)
	{
	}
}