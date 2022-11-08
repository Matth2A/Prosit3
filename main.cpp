#include <iostream>
using namespace std;

#include "CLpoint.h"
#include "CLPoint3D.h"

#include "CLParcours.h"
#include "CLParcours2D.h"
#include "CLParcours3D.h"


void main()
{
	int pause;

	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	CLParcours* parcours;

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint(1.0, 1.0);
	p3 = new CLpoint(2.0, 2.0);
	parcours = new CLParcours2D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();

	p1 = new CLPoint3D(0.0, 0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);
	p3 = new CLPoint3D(2.0, 2.0, 2.0);
	parcours = new CLParcours3D(3);

	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	cout << parcours->calculDistance() << endl;
	parcours->message();

	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLPoint3D(1.0, 1.0, 1.0);

	(p1 = p2)->afficherCordo();

	cin >> pause;
}