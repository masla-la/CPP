/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:51:19 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/21 09:10:58 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

# include <iostream>
# include <string>

template<typename T>
class	Array
{

	private:

		T				*_array;
		unsigned int	_size;

	public:

		Array( void );
		Array( unsigned  int n );
		Array( Array<T> const & obj );
		~Array( void );

		Array<T>	& operator=( Array<T> const & obj );
		T			& operator[]( unsigned int i );

		unsigned int	size( void );
		T				getArray( unsigned int i );

		class	SizeOverflowException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
};

template<typename T>
Array<T>::Array(void)
{
	_size = 0;
}

template<typename T>
Array<T>::Array( unsigned int n )
{
	_array = new T[n];
	_size = n;
}

template<typename T>
Array<T>::Array(Array const &obj)
{
	_array = new T [obj._size];
	for (unsigned int i = 0; i < obj._size; i++)
		_array[i] = obj._array[i];
	_size = obj._size;
}

template<typename T>
Array<T>::~Array(void)
{
	if (_size > 0)
		delete [] _array;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &obj)
{
	if (_size > 0)
		delete [] _array;
	_array = new T[obj._size];
	for (unsigned int i = 0; i < obj._size; i++)
		_array[i] = obj._array[i];
	_size = obj._size;
	return *this;
}

template<typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
	{
		throw	SizeOverflowException();
	}
	return _array[i];
}

template<typename T>
unsigned int	Array<T>::size(void)
{
	return  _size;
}

template<typename T>
T	Array<T>::getArray(unsigned int i)
{
	return _array[i];
}

template<typename T>
const char	*Array<T>::SizeOverflowException::what(void)const throw()
{
	return "Size overflow";
}

template<typename T>
std::ostream	&operator<<(std::ostream &os, Array<T> &obj)
{
	for (unsigned int i = 0; i < obj.size(); i++)
		os << obj.getArray(i) << std::endl;
	return os;
}

#endif