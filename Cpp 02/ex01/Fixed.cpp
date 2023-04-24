#include "Fixed.hpp"

//Constructors

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_i = 0;
}

Fixed::Fixed(Fixed const &Fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Fixed;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i << this->_n);
}

Fixed::Fixed(float const i)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(i * (1 << this->_n)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//Operators

Fixed &Fixed::operator=(Fixed const &obj)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(obj.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return (os);
}

//FT

void	Fixed::setRawBits(int const raw)
{
	this->_i = raw;
}

int	Fixed::getRawBits(void)const
{
	return (this->_i);
}

int	Fixed::toInt(void)const
{
	return (getRawBits() >> this->_n);
}

float	Fixed::toFloat(void)const
{
	return ((float)getRawBits() / (1 << this->_n));
}
