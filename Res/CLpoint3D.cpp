#include <iostream>
#include "CLpoint3D.h"

CLpoint3D::CLpoint3D(void)
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

CLpoint3D::CLpoint3D(double _x, double _y, double _z) : CLpoint(_x, _y)
{
	this->z = _z;
}


double CLpoint3D::getZ(void)
{
	return this->z;
}

void CLpoint3D::afficherCoordo(void)
{
	std::cout << "Les coordonnees du point : ";
	std::cout << this;
	std::cout << " sont ("
		<< this->getX() << ";"
		<< this->getY() << ")"
		<< "(" << this->getZ() << ")"
		<< std::endl;
}
