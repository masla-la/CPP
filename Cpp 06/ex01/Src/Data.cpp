/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:10 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:50:10 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../Inc/Data.hpp"

Data::Data(void): _data("Default")
{
}

Data::Data(Data const &obj): _data(obj.getData())
{
}

Data	&Data::operator=(Data const &obj)
{
	setData(obj.getData());
	return *this;
}

Data::~Data(void)
{
}

std::string	Data::getData(void)const
{
	return _data;
}

void	Data::setData(std::string ptr)
{
	_data = ptr;
}
