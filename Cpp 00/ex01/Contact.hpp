#ifndef _CONTACT_HPP_
# define _CONTACT_HPP_

# include <iostream>

class	Contact
{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nick;
		std::string	number;
		std::string	secret;
	public:
		Contact(void);
		~Contact(void);
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nick(std::string str);
		void		set_number(std::string str);
		void		set_secret(std::string str);
		std::string	get_fname(void);
		std::string	get_lname(void);
		std::string	get_nick(void);
		std::string	get_number(void);
		std::string	get_secret(void);
};

#endif