/*
 Programme : Representation et manipulation de cartes à jouer
 But :  Afficher la meilleure carte entre deux cartes
 Date de dernière modification : 07/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************

    const unsigned short int NB_CASES = 12; // nombre de cases du tableau des temperatures
    float tabTemp [12]; // tableau de temperature
    unsigned short int numTemp; // numero de la cellule du tableau qui sera traité
    
    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    for (numTemp = 0; numTemp <= NB_CASES-1; numTemp++)
    {
        // (clavier) >> saisirTemp >> tabTemp
        cout << "Saisir une temperature :";
        cin >> tabTemp[numTemp];

    }

    // tabTemp >> afficherTab >> ()
    for (numTemp = 0; numTemp <= NB_CASES-1; numTemp++)
    {
        cout << tabTemp[numTemp] << ", ";
    }
        

    return 0;
}