#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicules
{
private:
	string marque;
	int puissance;
	float kilometrage = 0;
public:
	void parcourir(float distance);
	void lire_cara();
	string getMarque();
	int getPuissance();
	float getKilometrage();
	void setMarque(string m);
	void setPuissance(int p);
};

