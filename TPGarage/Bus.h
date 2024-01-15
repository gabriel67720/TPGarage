#pragma once
#include "Vehicules.h"
class Bus : public Vehicules
{
private : 
	int place;
	int essieux;
public: 
	void setPlace(int p);
	void setEssieux(int e);
	int getPlace();
	int getEssieux();
	void getCara();
};

