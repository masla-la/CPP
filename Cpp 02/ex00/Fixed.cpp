/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:24:30 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:24:31 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

Fixed &Fixed::operator=(Fixed const &obj)
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
