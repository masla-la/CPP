/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:50:12 by masla-la          #+#    #+#             */
/*   Updated: 2023/09/14 10:50:13 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "../Inc/Serializer.hpp"

Serializer::Serializer(void)
{
}

Serializer::Serializer(Serializer const &obj)
{
	*this = obj;
}

Serializer::~Serializer(void)
{
}

Serializer	&Serializer::operator=(Serializer const &obj)
{
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
