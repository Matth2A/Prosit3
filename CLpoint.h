#pragma once
#include <iostream>
using namespace std;

class CLpoint
{
protected:
	double x;
	double y;
public:
	CLpoint();
	CLpoint(double, double);

	virtual void afficherCordo();
	virtual double getX();
	virtual double getY();
};

