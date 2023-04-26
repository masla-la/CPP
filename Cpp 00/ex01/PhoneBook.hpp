/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:22:52 by masla-la          #+#    #+#             */
/*   Updated: 2023/04/26 10:23:09 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_PHONEBOOK_HPP_
# define _PHONEBOOK_HPP_

# include <iostream>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact		contact[8];
		std::size_t	index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	add_fname(void);
		void	add_lname(void);
		void	add_nick(void);
		void	add_number(void);
		void	add_secret(void);
		void	search(void);
		int		print_all(void);
		void	print_contact(int index);
};

#endif