#include "Point.hpp"

Point::Point(void): x(0), y(0)
{
}

Point::Point(Fixed const x, Fixed const y): x(x), y(y)
{
}

Point::Point(Point const &Point): x(Point.getX()), y(Point.getY())
{
}

Point::Point(float const x, float const y): x(x), y(y)
{
}

Point::~Point(void)
{
}

Point	&Point::operator=(Point &obj)
{
	return (obj);
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}
