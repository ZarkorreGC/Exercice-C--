// Exercice C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <iostream>
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include "BreakableObject.h"
#include "Entity.h"
#include "Mob.h"
#include "Player.h"
#include "StaticObject.h"
#include "Vector2.h"
#include "World.h"



int main()
{


	StaticObject staticObj(0.f, 0.f);
	BreakableObject breakableObject(0.f, 0.f, 1.f, 10.f);

	Vector2 mobdirection(0.f, 1.f);
	Mob mob(0.f, 0.f, 15.f, 15.f, mobdirection);

	Vector2 playerdirection(0.0f, 1.0f);
	Player player(1.f, 1.f, 10.f, 10.f ,playerdirection, 10.f);
	player.deplacer();
	player.Attaque(&mob);



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
