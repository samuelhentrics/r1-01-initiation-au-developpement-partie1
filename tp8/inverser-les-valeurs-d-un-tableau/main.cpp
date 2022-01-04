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

void inverserTableau(int tab[], const unsigned short int& LONG_TAB);
    // But : Inverser les valeurs d'un tableau


// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    const unsigned short int NB_CASES = 6; // Nombre de cases dans le tableau
    int tableau[NB_CASES] = {-1,0,3,-2,3,4}; // Tableau contenant des entiers
    unsigned short int indiceCaseCourante; // Indice de la case courante du tableau


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // tableau, NB_CASES, compteur >> compterValPositives >> compteur ************************************************************
    inverserTableau(tableau, NB_CASES);

    // tableau, NB_CASES >> afficherTableau >> (écran) ***************************************************************************
    for (indiceCaseCourante = 0; indiceCaseCourante < NB_CASES; indiceCaseCourante++)
    {
        cout << tableau[indiceCaseCourante] << ", ";
    }
    

    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

void inverserTableau(int tab[], const unsigned short int& LONG_TAB){
    int valeurCaseCourante; // valeur de la case courante du taleau
    for (unsigned short int i = 0; i <= LONG_TAB/2-1; i++)
    {
        valeurCaseCourante = tab[i];
        tab[i] = tab[LONG_TAB-1-i];
        tab[LONG_TAB-1-i] = valeurCaseCourante;
    }
    
}