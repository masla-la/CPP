/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:22:43 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:23:50 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::set_fname(std::string str)
{
	this->fname = str;
}

void	Contact::set_lname(std::string str)
{
	this->lname = str;
}

void	Contact::set_nick(std::string str)
{
	this->nick = str;
}

void	Contact::set_number(std::string str)
{
	this->number = str;
}

void	Contact::set_secret(std::string str)
{
	this->secret = str;
}

std::string	Contact::get_fname(void)
{
	return (this->fname);
}

std::string	Contact::get_lname(void)
{
	return (this->lname);
}

std::string	Contact::get_nick(void)
{
	return (this->nick);
}

std::string	Contact::get_number(void)
{
	return (this->number);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}
