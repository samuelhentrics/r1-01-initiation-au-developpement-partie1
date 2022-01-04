/*
 Programme : Somme des entiers d'un intervalle donnée
 But :  Calculer la somme des entiers de l'intervalle borneInf à borneSup
 Date de dernière modification : 24/09/2021
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

    // clavier >> saisirBorneInf >> borneInf *************************************************************************************
    cout << "Entrez la borne inferieure de l'intervalle : ";
     cin >> borneInf;

    // clavier >> saisirBorneSup >> borneSup *************************************************************************************
    cout << "Entrez la borne superieure de l'intervalle : ";
     cin >> borneSup;


    // bornInf, borneSup >> calculSomme >> somme *********************************************************************************
    int somme = 0; // Variable resultat de la somme des valeurs
    for (int nbCourant = borneInf; nbCourant <= borneSup; nbCourant++)
    {
        somme += nbCourant;
    }
    
    // somme >> afficherSomme >> écran *******************************************************************************************
    cout << "La somme des entiers compris de cet intervalle est egal a " << somme << endl; 

    return 0;
}