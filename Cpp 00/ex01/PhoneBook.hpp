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