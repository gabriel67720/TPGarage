#include "Vehicules.h"

void Vehicules::parcourir(float distance)
{
	kilometrage += distance;
}

void Vehicules::lire_cara()
{
	cout << "Le vehicule est un(e) " << getMarque() << endl;
	cout << "Elle/il a " << getPuissance() << "cv" << endl;
	cout << "Elle/il a parcouru(e) " << getKilometrage() << "Km" << endl;

}

string Vehicules::getMarque()
{
	return marque;
}

int Vehicules::getPuissance()
{
	return puissance;
}

float Vehicules::getKilometrage()
{
	return kilometrage;
}

void Vehicules::setMarque(string m)
{
	marque = m;
}

void Vehicules::setPuissance(int p)
{
	puissance = p;
}
