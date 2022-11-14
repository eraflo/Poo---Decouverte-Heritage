#include <iostream>
#include <math.h>
#include "CLparcours3D.h"

CLparcours3D::CLparcours3D(void)
{
}

CLparcours3D::CLparcours3D(int nb) : CLparcours2D(nb)
{
}

double CLparcours3D::calculDistance(void)
{
	double result = 0.0;
	for (int i = 0; i < this->nbPoints - 1; i++)
	{
		float _x = this->listePoint[i + 1]->getX();
		float _y = this->listePoint[i + 1]->getY();
		float _z = this->listePoint[i + 1]->getZ();
		result += sqrt(pow(_x - this->listePoint[i]->getX(), 2) + pow(_y - this->listePoint[i]->getY(), 2) + pow(_z - this->listePoint[i]->getZ(), 2));
	}
	return result;
}


void CLparcours3D::message(void)
{
	std::cout << "Calcul d'un parcours de type 3D" << std::endl;
}
