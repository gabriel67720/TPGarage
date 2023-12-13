#pragma once
#include "Vehicules.h"
class Voitures : public Vehicules
{
private :
	string type;

public : 
	void setType(string t);
	string getType();
	void lire_cara();

};

