#include "CLPoint3D.h"

CLPoint3D::CLPoint3D()
{
}

double CLPoint3D::getZ()
{
	return z;
}

CLPoint3D::CLPoint3D(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void CLPoint3D::afficherCordo()
{
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	cout << "z: " << z << endl;
}