#pragma once
#include <iostream>
#include "CLpoint3D.h"

class CLParcours
{
protected:
	CLpoint** listePoint;
	int nbPoints;
	int index;
public:
	CLParcours(void);
	~CLParcours(void);
	virtual double calculDistance(void) = 0;
	virtual void ajouterPoint(CLpoint*) = 0;
	virtual void message(void) = 0;
};

