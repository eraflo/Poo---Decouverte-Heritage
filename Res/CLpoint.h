#pragma once
#include <iostream>

class CLpoint
{
protected:
	double x;
	double y;
public:
	CLpoint(void);
	CLpoint(double, double);
	double getX(void);
	double getY(void);
	virtual double getZ(void);
	virtual void afficherCoordo(void);
};

