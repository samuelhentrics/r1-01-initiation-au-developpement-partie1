/*
 Programme : Afficher Prix Réduit
 But :  A partir d'un prix initial et d'une réduction obtenir le prix réduit
 Date de dernière modification : 21/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

void calculerPrixReduit(float prixInit, unsigned short int reduc);
    // But : A partir d'un prix initial et d'une réduction en pourcentage, le sous-programme affiche à l'écran le prix réduit

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    float prix; // Prix sans réduction entré par l'utilisateur
    unsigned short int reducPourcentage; // Réduction exprimé en pourcentage qui sera appliqué au prix sans réduction


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // (clavier) >> saisirPrix >> prix *******************************************************************************************
    cout << "Entrez un prix : ";
    cin >> prix;
    
    // (clavier) >> saisirReduction >> reducPourcentage **************************************************************************
    cout << "Entrez une reduction en pourcentage : ";
    cin >> reducPourcentage;

    // prix, reducPourcentage >> afficherPrixReduit >> (écran) *******************************************************************
    calculerPrixReduit(prix, reducPourcentage);

    return 0;
}

// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

void calculerPrixReduit(float prixInit, unsigned short int reduc){
    cout << prixInit-prixInit*reduc/100 << endl;
}