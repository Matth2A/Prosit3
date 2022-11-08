#pragma once
#include "CLpoint.h"
#include "CLPoint3D.h"

#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

class CLParcours
{
protected:
	int taille;
public:
	CLParcours();
	virtual void message();
	virtual void ajouterPoint(CLpoint*);
	virtual double calculDistance();
};