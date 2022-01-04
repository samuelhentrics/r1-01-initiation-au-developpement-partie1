/*
 Programme : Valeur absolue
 But :  Retourne la valeur absolue à partir d'un nombre donnée
 Date de dernière modification : 27/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
#include <cmath>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

double valeurAbsolue(double nbr);
    // But : Retourne la valeur absolue de nb


// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    double nb; // Nombre saisi par le joueur afin de trouver la valeur absolue
    double valAbsolue; // Valeur contenant la valeur absolue de nb

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************
 
    // (clavier) >> saisirNb >> nb ***********************************************************************************************
    cout << "Saisir un nombre :";
    cin >> nb;

    // nb >> calculerValAbsolue >> valAbsolue

    valAbsolue = valeurAbsolue(nb);

    // nb, valAbsolue >> afficherValAbsolue >> (écran) ***************************************************************************
    cout << "La valeur absolue de " << nb << " est " << valAbsolue;

    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

double valeurAbsolue(double nbr){
    return sqrt(nbr*nbr);
}