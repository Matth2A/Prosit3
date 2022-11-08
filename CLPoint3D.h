#pragma once
#include <iostream>
using namespace std;
#include "CLpoint.h"

class CLPoint3D : public CLpoint
{
protected:
	double z;

public:
	CLPoint3D();
	CLPoint3D(double, double, double);

	double getZ();
	void afficherCordo();
};

