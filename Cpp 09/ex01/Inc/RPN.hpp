#ifndef _RPN_HPP_
# define _RPN_HPP_

# include <iostream>
# include <string>
# include <stack>

class RPN
{

	private:

		std::stack<int>		_num;
		std::stack<char>	_op;
		int					_fnum;

		RPN( char *av );
		
		void	proccessNum( void );
		int		insertNum( char *av );

	public:

		RPN( void );
		RPN( RPN const & RPN );
		~RPN( void );
		RPN	&operator=( RPN const & obj );

		void	proccess( char *av );

};

	int	checkOperator( int i, int num, char op );

#endif