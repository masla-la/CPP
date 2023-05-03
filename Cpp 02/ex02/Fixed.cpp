/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:24:51 by masla-la          #+#    #+#             */
/*   Updated: 2023/05/03 11:24:42 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors

Fixed::Fixed(void)
{
	this->_i = 0;
}

Fixed::Fixed(Fixed const &Fixed)
{
	*this = Fixed;
}

Fixed::Fixed(int const i)
{
	setRawBits(i << this->_n);
}

Fixed::Fixed(float const i)
{
	setRawBits((int)roundf(i * (1 << this->_n)));
}

//Destructor

Fixed::~Fixed(void)
{
}

//Operators

Fixed &Fixed::operator=(Fixed const &obj)
{
	setRawBits(obj.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return (os);
}

// < , > , <= , >= , == , !=

int		Fixed::operator<(Fixed const & obj)const
{
	if (this->getRawBits() < obj.getRawBits())
		return (1);
	return (0);
}

int		Fixed::operator>(Fixed const & obj)const
{
	if (this->getRawBits() > obj.getRawBits())
		return (1);
	return (0);
}

int		Fixed::operator<=(Fixed const & obj)const
{
	if (this->getRawBits() <= obj.getRawBits())
		return (1);
	return (0);
}

int		Fixed::operator>=(Fixed const & obj)const
{
	if (this->getRawBits() >= obj.getRawBits())
		return (1);
	return (0);
}

int		Fixed::operator==(Fixed const & obj)const
{
	if (this->getRawBits() == obj.getRawBits())
		return (1);
	return (0);
}

int		Fixed::operator!=(Fixed const & obj)const
{
	if (this->getRawBits() != obj.getRawBits())
		return (1);
	return (0);
}

// + , - , * , /

Fixed	Fixed::operator+(Fixed const & obj)const
{
	Fixed dest((this->toFloat() + obj.toFloat()));
	return (dest);
}

Fixed	Fixed::operator-(Fixed const & obj)const
{
	Fixed dest((this->toFloat() - obj.toFloat()));
	return (dest);
}

Fixed	Fixed::operator*(Fixed const & obj)const
{
	Fixed dest((this->toFloat() * obj.toFloat()));
	return (dest);
}

Fixed	Fixed::operator/(Fixed const & obj)const
{
	Fixed dest((this->toFloat() / obj.toFloat()));
	return (dest);
}

//++ / --

Fixed	&Fixed::operator++(void)
{
	_i++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_i -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	
	++*this;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--*this;
	return (temp);
}

//Max && min

Fixed	const Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed	&Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed const	Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed	&Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
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
