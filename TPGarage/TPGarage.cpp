// TPGarage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vehicules.h"
#include "Voitures.h"

int main()
{
	string marque1;
	int puissance;
	float distance;
	string type;
	char a;
	int k;
	Vehicules voiture1;
	Voitures voiture2, voiture3;

	cout << "Entrez la marque du vehicule : ";
	cin >> marque1;
	voiture1.setMarque(marque1);

	cout << "Indiquez la puissance du vehicule :";
	cin >> puissance;
	voiture1.setPuissance(puissance);

	

	cout << "Voulez-vous rouler ? (O / N)";
	cin >> a;
	if (a == 'o') {
		cout << "Quel distance voulez-vous parcourir ?";
		cin >> k;
		voiture1.parcourir(k);
	}

	voiture1.lire_cara();

	cout << "Entrez la marque du vehicule : ";
	cin >> marque1;
	voiture2.setMarque(marque1);

	cout << "Indiquez la puissance du vehicule :";
	cin >> puissance;
	voiture2.setPuissance(puissance);

	cout << "Quel est le type de la voiture ?";
	cin >> type;
	voiture2.setType(type);

	
	cout << "Voulez-vous rouler ? (o / n)";
	cin >> a;
	if (a == 'o') {
		cout <<"Quel distance voulez-vous parcourir ?";
		cin >> k;
		voiture2.parcourir(k);
	}

	voiture2.lire_cara();

	cout << "Entrez la marque du vehicule : ";
	cin >> marque1;
	voiture3.setMarque(marque1);

	cout << "Indiquez la puissance du vehicule :";
	cin >> puissance;
	voiture3.setPuissance(puissance);

	cout << "Quel est le type de la voiture ?";
	cin >> type;
	voiture3.setType(type);


	cout << "Voulez-vous rouler ? (O / N)";
	cin >> a;
	if (a == 'o') {
		cout << "Quel distance voulez-vous parcourir ?";
		cin >> k;
		voiture3.parcourir(k);
	}

	voiture3.lire_cara();



	
	
}











// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
