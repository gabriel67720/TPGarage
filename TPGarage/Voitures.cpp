#include "Voitures.h"

void Voitures::setType(string t)
{
	type = t;
}

string Voitures::getType()
{
	return type;
}

void Voitures::lire_cara()
{
	cout << "Le vehicule est un(e) " << getMarque() << endl;
	cout << "Elle/il a " << getPuissance() << "cv" << endl;
	cout << "Elle/il a parcouru(e) " << getKilometrage() << "Km" << endl;
	cout << "C'est un vehicule de type :" << getType() << endl;

}
