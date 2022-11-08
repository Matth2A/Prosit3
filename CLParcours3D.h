#pragma once
#include <iostream>
using namespace std;
#include "CLParcours.h"
#include "CLPoint3D.h"

class CLParcours3D : public CLParcours
{
private:
	vector <CLPoint3D*> liste = {};
public:
	CLParcours3D(int);
	void message();
	void ajouterPoint(CLPoint3D*);
	double calculDistance();
};