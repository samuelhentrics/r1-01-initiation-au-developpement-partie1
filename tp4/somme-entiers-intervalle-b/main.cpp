/*
 Programme : Somme des entiers d'un intervalle donnée
 But :  Calculer la somme des entiers de l'intervalle borneInf à borneSup
 Date de dernière modification : 23/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************

    int borneInf; // Borne inférieure donnée pour calculer la somme jusqu'à cette borne
    int borneSup; // Borne supérieure donnée pour calculer la somme jusqu'à cette borne

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // clavier >> saisirBorneSup >> borneSup *************************************************************************************
    cout << "Entrez la borne inférieure de l'intervalle : ";
     cin >> borneInf;

    // clavier >> saisirBorneInf >> borneInf *************************************************************************************
    cout << "Entrez la borne superieure de l'intervalle : ";
     cin >> borneSup;


    // borneSup, somme >> calculSomme >> somme ***********************************************************************************
    int somme = borneInf;
    for (int nbCourant = somme+1; nbCourant <= borneSup; nbCourant++)
    {
        somme += nbCourant;
    }
    
    // somme >> afficherSomme >> écran *******************************************************************************************
    cout << "La somme des entiers compris de cet intervalle est egal a " << somme << endl; 

    return 0;
}