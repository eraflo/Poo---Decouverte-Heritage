#include <iostream>
#include <math.h>
#include "CLparcours2D.h"

CLparcours2D::CLparcours2D(void)
{
}

CLparcours2D::CLparcours2D(int nb)
{
	this->listePoint = new CLpoint * [nb];
	this->index = 0;
	this->nbPoints = nb;
}

double CLparcours2D::calculDistance(void)
{
	double result = 0.0;
	for (int i = 0; i < this->nbPoints-1; i++)
	{
		float _x = this->listePoint[i + 1]->getX();
		float _y = this->listePoint[i + 1]->getY();
		result += sqrt(pow(_x - this->listePoint[i]->getX(), 2) + pow(_y - this->listePoint[i]->getY(), 2));
	}
	return result;
}

void CLparcours2D::ajouterPoint(CLpoint* Pt)
{
	this->listePoint[this->index] = Pt;
	this->index++;

}

void CLparcours2D::message(void)
{
	std::cout << "Calcul d'un parcours de type 2D" << std::endl;
}
