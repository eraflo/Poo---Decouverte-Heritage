#include <iostream>
#include <math.h>
#include "CLParcours.h"

CLParcours::CLParcours(void)
{
	this->index = 0;
	this->nbPoints = 0;
}

CLParcours::~CLParcours(void)
{
	delete [] this->listePoint;
	this->nbPoints = 0;
	this->index = 0;
}
