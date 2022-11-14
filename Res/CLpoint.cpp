#include <iostream>
#include "CLpoint.h"

CLpoint::CLpoint(void)
{
	this->x = 0;
	this->y = 0;
}

CLpoint::CLpoint(double _x, double _y)
{
	this->x = _x;
	this->y = _y;
}



double CLpoint::getX(void)
{
	return this->x;
}

double CLpoint::getY(void)
{
	return this->y;
}

double CLpoint::getZ(void)
{
	return 0.0;
}

void CLpoint::afficherCoordo(void)
{
	std::cout << "Les coordonnees du point : ";
	std::cout << this;
	std::cout << " sont ("
		<< this->getX() << ";"
		<< this->getY() << ")"
		<< std::endl;
}
