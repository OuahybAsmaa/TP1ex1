// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include"complex.h"
#include <iostream>
using namespace std;
/*
int main()
{
    complex* Z1=new complex(2,3);
    complex* Z2 = new complex();

    complex *Z3;
    Z3 = *Z2 + *Z1;
    //Z3 = (*Z1).operator+(*Z2);//Z1 c'est l'operateur courant et Z2 c'est l'operateur passé en parametre
    
    //Z4 += Z1;//ne se marche pas car on a définit sauf l'operateur +
    Z1 = *Z1+4;
   


    Z1->afficher();
    Z2->afficher();
    Z3->afficher();
    
    delete Z1;
    delete Z2;
    delete Z3;
        
   
}*/

int main()
{
    complex* Z1 = new complex(2, -3);
    complex* Z2 = new complex(1, 1);
    complex* Z3;
    double i;
    
    cout << "Z1 et Z2 : " << endl;
    Z1->afficher();
    Z2->afficher();

    Z3 = *Z2 * *Z1;
    cout << "Z1*Z2 : " << endl;
    Z3->afficher();

    Z3 = *Z1 + *Z2;
    cout << "Z1+Z2 : " << endl;
    Z3->afficher();

    Z3 = *Z1 - *Z2;
    cout << "Z1-Z2 : " << endl;
    Z3->afficher();

    Z3 = *Z1 / *Z2;
    cout << "Z1/Z2 : " << endl;
    Z3->afficher();

    cout << "modulo de Z1 : " << endl;
    i=Z1->modulo(*Z1);
    cout << "|Z|=" << i << endl;
    
    cout << "l'egalité de Z1 et Z2" << endl;
    
    
    if( *Z1 == *Z2)
        cout << "Z1 et Z2 sont egaux " << endl;
    else 
        cout << "Z1 et Z2 ne sont pas egaux " << endl;
    
    
    
   

    delete Z1;
    delete Z2;
    delete Z3;
   

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
