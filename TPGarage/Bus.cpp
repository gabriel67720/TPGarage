#include "Bus.h"

void Bus::setPlace(int p)
{
	place = p;
}

void Bus::setEssieux(int e)
{
	essieux = e;
}

int Bus::getPlace()
{
	return place;
}

int Bus::getEssieux()
{
	return essieux;
}

void Bus::getCara()
{
	cout << "Le bus possede " << getPlace() << "place(s)" << endl;
	cout << "Le bus possede " << getEssieux() << "Essieux" << endl;
}
