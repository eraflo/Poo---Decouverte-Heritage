#pragma once
#include <iostream>
#include "CLparcours2D.h"

class CLparcours3D : public CLparcours2D
{
public:
	CLparcours3D(void);
	CLparcours3D(int);
	double calculDistance(void);
	void message(void);
};

