#pragma once
#include <iostream>
using namespace std;
#include "CLParcours.h"

class CLParcours2D : public CLParcours
{
private:
	vector <CLpoint*> liste = {};
public:
	CLParcours2D(int);
	void message();
	void ajouterPoint(CLpoint* point);
	double calculDistance();
};