/*
 Programme : Calculer un prix réduit
 But :  A partir d'un prix initial et d'une réduction calculer le prix réduit et l'afficher
 Date de dernière modification : 21/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

void calculerPrixReduit(float prixInit, unsigned short int reduc, float& prixReduit);
    // But : A partir d'un prix initial et d'une réduction en pourcentage, le sous-programme affiche à l'écran le prix réduit

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    float prix; // Prix sans réduction entré par l'utilisateur
    unsigned short int reducPourcentage; // Réduction exprimé en pourcentage qui sera appliqué au prix sans réduction
    float prixRed; // Prix avec réduction après calcul de la réduction par rapport au prix initial


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // (clavier) >> saisirPrix >> prix *******************************************************************************************
    cout << "Entrez un prix : ";
    cin >> prix;
    
    // (clavier) >> saisirReduction >> reducPourcentage **************************************************************************
    cout << "Entrez une reduction en pourcentage : ";
    cin >> reducPourcentage;

    // prix, reducPourcentage, prixRed >> calculerPrixRed >> prixRed *************************************************************
    calculerPrixReduit(prix, reducPourcentage, prixRed);

    // prixRed >> afficherPrixRed >> (écran) *************************************************************************************
    cout << prixRed << endl;

    return 0;
}

// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

void calculerPrixReduit(float prixInit, unsigned short int reduc, float& prixReduit){
    prixReduit = prixInit-prixInit*reduc/100;
}