#include "CLpoint.h"

CLpoint::CLpoint()
{
}

double CLpoint::getX()
{
	return x;
}

double CLpoint::getY()
{
	return y;
}

CLpoint::CLpoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

void CLpoint::afficherCordo()
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}