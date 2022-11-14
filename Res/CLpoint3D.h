#pragma once
#include <iostream>
#include "CLpoint.h"

class CLpoint3D : public CLpoint
{
private:
	double z;
public:
	CLpoint3D(void);
	CLpoint3D(double, double, double);
	double getZ(void);
	void afficherCoordo(void);
};

