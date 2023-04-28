#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point Point)
{

}

//D = B - A
//E = C - A
//Py = Ay + W1Dy + W2Ey
//Px = Ay + W1Ey + W2Ey


//W2 = 1/Ey(Py - Ay - W1Dy)

//Px = Ax + W1Dx + Ex/Ey(Py - Ay - W1Dy)

//W1 = Ex(Ay + Py) + Ey(Py - Ax)
//-----------------------------
//      DxEy - DyEx

//if ((W1 >= 0.0) && (W2 >= 0.0) && ((W1 + W2) <= 1.0))