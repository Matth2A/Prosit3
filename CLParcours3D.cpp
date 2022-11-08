#include "CLParcours3D.h"

CLParcours3D::CLParcours3D(int nb)
{
	this->liste.clear();
	this->liste.resize(nb);
}

void CLParcours3D::message()
{
	cout << "Calcule d'un parcour de points 3D" << endl;
}

void CLParcours3D::ajouterPoint(CLPoint3D* point)
{
	liste.push_back(point);
}

double CLParcours3D::calculDistance()
{
	double rendu = 0;
	for (int i = 0; i < liste.size(); i++)
	{

		rendu += sqrt(pow((liste[i + 1]->getX() - liste[i]->getX()), 2) + pow((liste[i + 1]->getY() - liste[i]->getY()), 2) + pow((liste[i + 1]->getZ() - liste[i]->getZ()), 2));
	}
	return rendu;
}