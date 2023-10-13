/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:52:01 by masla-la          #+#    #+#             */
/*   Updated: 2023/10/13 10:19:01 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inc/MutantStack.hpp"

/*int main()
{
	std::list<int> mstack;
	
	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << *++mstack.begin() << std::endl;

	mstack.pop_back();

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);

	//[...]

	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::list<int> s(mstack);
	return 0;
}*/

/*int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	//[...]

	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	return 0;
}*/

int main()
{
	// creation of a string stack
	MutantStack<std::string> mstack_string;
	mstack_string.push("Five");
	mstack_string.push("Seventeen");
	mstack_string.pop();
	mstack_string.push("Three");
	mstack_string.push("Seven hundred thirty-seven");

	// creation of a int stack
	MutantStack<int> mstack;
	mstack.push(5);		// addding 5
	mstack.push(17);	// adding 17
	mstack.pop();		// deleting 17
	mstack.push(3);		// adding 3
	mstack.push(737);	// adding 737

	std::cout << std::endl;

	// start working with string stack ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
	MutantStack<std::string>::iterator s_it = mstack_string.begin();
	MutantStack<std::string>::iterator e_it = mstack_string.end();

	++s_it;
	--s_it;
	std::cout << "String Iterator: ";
	while (s_it != e_it)
	{
		std::cout << *s_it << ", ";
		++s_it;
	}

	std::cout << std::endl << std::endl << "↓↓↓ String Stack Information ↓↓↓\nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;
	mstack_string.pop();
	mstack_string.pop();
	mstack_string.pop();
	std::cout << std::endl << std::endl << "↓↓↓ String Stack Information ↓↓↓\nSize: " << mstack_string.size() << "\nEmpty: " << (mstack_string.empty() ? "true" : "false") << std::endl;
	// end working with string stack ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

	std::cout << std::endl << "-------------------------------------------------------------------" << std::endl << std::endl;

	// start working with int stack ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
	MutantStack<int>::iterator it_s = mstack.begin();
	MutantStack<int>::iterator it_e = mstack.end();

	++it_s;
	--it_s;

	std::cout << "Int Iterator: ";
	while (it_s != it_e)
	{
		std::cout << *it_s << "` ";
		++it_s;
	}

	std::cout << std::endl << std::endl << "↓↓↓ Int Stack Information ↓↓↓\nSize: " << mstack.size() << "\nEmpty: " << (mstack.empty() ? "true" : "false") << std::endl << std::endl;
	// end working with int stack ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

	return 0;
}