/*
 Programme : Compter les valeurs positives d'un tableau
 But :  Compte le nombre de valeurs positives dans le tableau
 Date de dernière modification : 21/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

void compterValPositives(const int tab[], const unsigned short int& LONG_TAB, unsigned short int& nbPositifs);
    // But : Compte les valeurs positives d'un tableau


// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    const unsigned short int NB_CASES = 5; // Nombre de cases dans le tableau
    int tableau[NB_CASES] = {-1,0,3,-2,3}; // Tableau contenant des entiers
    unsigned short int compteur; // Compteur de nombre positif dans le tableau


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // tableau, NB_CASES, compteur >> compterValPositives >> compteur ************************************************************
    compterValPositives(tableau, NB_CASES, compteur);

    // compteur >> afficherNbPositifs >> compteur ********************************************************************************
    cout << compteur;
    

    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

void compterValPositives(const int tab[], const unsigned short int& LONG_TAB, unsigned short int& nbPositifs){
    for (unsigned short int i = 0; i <= LONG_TAB-1; i++)
    {
        if (tab[i]>0)
        {
            nbPositifs++;
        }
        
    }
    
}