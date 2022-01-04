/*
 Programme : Somme des entiers d'un intervalle donné (borne supérieure donnée uniquement)
 But :  Calculer la somme des entiers de l'intervalle 0 à borneSup
 Date de dernière modification : 23/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************

    int borneSup; // Borne supérieure donnée pour calculer la somme jusqu'à cette borne

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // clavier >> saisirBorne >> borneSup ****************************************************************************************
    cout << "Entrez la borne superieure de l'intervalle : ";
     cin >> borneSup;

    // borneSup, somme >> calculSomme >> somme ***********************************************************************************
    int somme = 1; // Variable de la somme des entiers
    for (int nbCourant = somme+1; nbCourant <= borneSup; nbCourant++)
    {
        somme += nbCourant;
    }
    
    // somme >> afficherSomme >> écran *******************************************************************************************
    cout << "La somme des entiers compris de cet intervalle est egal a " << somme << endl; 

    return 0;
}