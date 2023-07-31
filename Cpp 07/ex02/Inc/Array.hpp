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
		T		& operator[]( unsigned int i );

		unsigned int	size( void );

		class	SizeOverflowException: public std::exception
		{
			public:
				virtual const char *	what( void ) const throw();
		};
};

template<typename T>
Array<T>::Array(void)
{
	_array[0] = new T;
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
	for (unsigned int i = 0; i < obj._size; i++)
	{
		_array[i] = *new T();
		_array[i] = obj._array[i];
	}
	_size = obj._size;
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] _array;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &obj)
{
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
		try
		{
			throw SizeOverflowException();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return _array[i];
}

template<typename T>
unsigned int	Array<T>::size(void)
{
	return  _size;
}

template<typename T>
const char	*Array<T>::SizeOverflowException::what(void)const throw()
{
	return "Grade too Low";
}

#endif