/*
 Programme : Compter les valeurs négatives d'un tableau
 But :  Compte les valeurs négatives d'un tableau
 Date de dernière modification : 13/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************

    const unsigned short int NB_CASES=12; // Nombre de cases du tableau
    int tab[NB_CASES] = {-1,12,18,-4,-8,-7,15,14,9,0,-2,-3}; // Tableau contenant les nombres négatives à compter
    unsigned short int indiceCaseCourante; // Indice de la case courante
    unsigned short int nbValNeg; // Nombre de valeurs négatives du tableau

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // () >> initialisationValeur >> nbValNeg ***********************************************************************************
    nbValNeg = 0;

    // tab >> compterValNeg >> nbValNeg ******************************************************************************************
    for (indiceCaseCourante = 0; indiceCaseCourante < NB_CASES; indiceCaseCourante++)
    {
        if (tab[indiceCaseCourante]<0){
            nbValNeg++;
        }
    }

    // nbValNeg >> afficherNbValNeg >> (écran) ***********************************************************************************

    cout << "Le nombre de valeurs negatives du tableau est de " << nbValNeg << endl;
    

    return 0;
}