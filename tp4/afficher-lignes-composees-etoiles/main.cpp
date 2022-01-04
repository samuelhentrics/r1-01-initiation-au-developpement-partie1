/*
 Programme : Afficher des lignes composées d'étoiles
 But :  Afficher des lignes composées d'étoiles à partir d'un nombre donnée
 Date de dernière modification : 24/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************

    int nbLignes; // Nombre saisie par l'utilisateur pour afficher un nombre de lignes d'étoile.

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // clavier >> saisirNbLignes >> nbLignes *************************************************************************************
    cout << "Entre un nombre de lignes a afficher : ";
     cin >> nbLignes;

    // nbLignes >> afficherLignesEtoiles >> écran  *******************************************************************************
    for (int ligne = 1; ligne <= nbLignes; ligne++)
    {
        cout << "*****" << endl;
    }
    

    return 0;
}