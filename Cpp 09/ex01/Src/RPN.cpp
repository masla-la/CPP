/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:09:47 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/18 13:09:47 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/RPN.hpp"

RPN::RPN(void)
{
}

RPN::RPN(char *av)
{
	insertNum(av);
}

RPN::RPN(RPN const & RPN)
{
	*this = RPN;
}

RPN::~RPN(void)
{
}

RPN	&RPN::operator=(RPN const & obj)
{
	_num = obj._num;
	_op = obj._op;
	_fnum = obj._fnum;
	return *this;
}

void	RPN::proccess(char *av)
{
	if (_num.empty())
		if (insertNum(av))
			return;
	proccessNum();
}

int	RPN::insertNum(char *av)
{
	for (int i = strlen(av) - 1; i > 0; i--)
	{
		if (i % 2 == 1 && av[i] != ' ')
		{
			std::cout << "Error" << std::endl;
			return 1;
		}
		if (av[i] == ' ' && i > 0)
			i--;
		if (isdigit(av[i]))
			_num.push(av[i] - '0');
		else if (av[i] == '+' || av[i] == '-' || av[i] == '*' || av[i] == '/')
			_op.push(av[i]);
		else
		{
			std::cout << "Error" << std::endl;
			return 1;
		}
	}
	return 0;
}

void	RPN::proccessNum(void)
{
	if (_num.size() != _op.size() + 1)
	{
		std::cout << "Error" << std::endl;
		return;
	}
	_fnum = _num.top();
	_num.pop();
	for (std::stack<int> it = _num; !it.empty(); it.pop())
	{
		_fnum = checkOperator(_fnum, it.top(), _op.top());
		_op.pop();
	}
	std::cout << _fnum<< std::endl;
}

int	checkOperator(int i, int num, char op)
{
	if (op == '+')
		return i + num;
	else if (op == '-')
		return i - num;
	else if (op == '*')
		return i * num;
	else if (op == '/')
		return i / num;
	return i;
}
