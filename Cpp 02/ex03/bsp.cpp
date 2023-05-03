#include "Point.hpp"

Fixed	*get_W1(Point const a, Point const b, Point const c, Point Point)
{
	Fixed const	ax(a.getX());
	Fixed const	ay(a.getY());
	Fixed const bx(b.getX());
	Fixed const by(b.getY());
	Fixed const	cx(c.getX());
	Fixed const cy(c.getY());
	Fixed const	Pointx(Point.getX());
	Fixed const	Pointy(Point.getY());

	Fixed const	num = ((ax * (cy - ay)) + (Pointy - ay) * (cx - ax) - Pointx * (cy - ay));
	Fixed const	num2 = ((by - ay) * (cx - ax) - (bx - ax) * (cy - ay));

	Fixed *W1 = new Fixed (num / num2);

	return (W1);
}

Fixed	*get_W2(Fixed const W1, Point const a, Point const b, Point const c, Point Point)
{
	Fixed const	ax(a.getX());
	Fixed const	ay(a.getY());
	Fixed const bx(b.getX());
	Fixed const by(b.getY());
	Fixed const	cx(c.getX());
	Fixed const cy(c.getY());
	Fixed const	Pointx(Point.getX());
	Fixed const	Pointy(Point.getY());

	Fixed const	num = ((Pointy - ay - W1 * (by - ay)));
	Fixed const num2 = (cy - ay);

	Fixed *W2 = new Fixed (num / num2);
	return (W2);
}

bool	bsp(Point const a, Point const b, Point const c, Point Point)
{
	Fixed *W1 = get_W1(a, b, c, Point);
	Fixed *W2 = get_W2(*W1, a, b, c, Point);
	bool	i;

	if (*W1 > 0 && *W2 > 0 && (*W1 + *W2) < 1)
		i = true;
	else
		i = false;
	delete W1;
	delete W2;
	return (i);
}
