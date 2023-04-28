#ifndef	_POINT_HPP_
# define _POINT_HPP_

# include "Fixed.hpp"

class  Point
{
	private:

		Fixed const x;
		Fixed const y;

	public:

		Point( void );
		Point( Fixed const x, Fixed const y);
		Point( Point const &Point );
		Point( float const x, float const y );
		Point &operator=( Point & obj );
		~Point( void );
		Fixed getX( void ) const;
		Fixed getY( void ) const;

};

bool	bsp(Point const a, Point const b, Point const c, Point Point);

#endif