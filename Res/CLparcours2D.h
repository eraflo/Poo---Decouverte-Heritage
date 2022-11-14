#pragma once
#include <iostream>
#include "CLParcours.h"

class CLparcours2D : public CLParcours
{
public:
	CLparcours2D(void);
	CLparcours2D(int);
	double calculDistance(void);
	void ajouterPoint(CLpoint*);
	void message(void);
};

