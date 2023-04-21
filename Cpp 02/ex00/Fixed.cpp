#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_i = 0;
}

Fixed::Fixed(Fixed &Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Fixed;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(obj.getRawBits());
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->_i = raw;
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_i);
}
