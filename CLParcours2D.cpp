#include "CLParcours2D.h"

CLParcours2D::CLParcours2D(int nb)
{
	this->liste.clear();
	this->liste.resize(nb);
}

void CLParcours2D::message()
{
	cout << "Calcule d'un parcour de points 2D" << endl;
}

void CLParcours2D::ajouterPoint(CLpoint* point)
{
	this->liste.push_back(point);
}

double CLParcours2D::calculDistance()
{
	double rendu = 0;
	for (int i = 0; i < liste.size(); i++)
	{
		rendu += sqrt(pow((liste[i + 1]->getX() - liste[i]->getX()), 2) + pow((liste[i + 1]->getY() - liste[i]->getY()), 2));
	}
	return rendu;
}