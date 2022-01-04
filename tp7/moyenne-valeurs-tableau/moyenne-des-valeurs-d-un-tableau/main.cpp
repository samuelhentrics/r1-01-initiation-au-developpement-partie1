/*
 Programme : Moyenne d'un tableau
 But :  Faire la moyenne des valeurs d'un tableau
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
    int tab[NB_CASES] = {-1,12,18,-4,-8,-7,15,14,9,0,-2,-3}; // Tableau contenant des entiers
    int sommeTab; // Somme de toutes les valeurs du tableau
    float moyenneTab; // Moyenne de la somme des valeurs du tableau
    unsigned short int indiceCaseCourante; // Indice de la case courante

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // tab, NB_CASES >> sommeDuTableau >> sommeTab *******************************************************************************
    sommeTab = 0;
    // **** tab, NB_CASES >> calculSommeDuTableau >> sommeTab ********************************************************************
    for (indiceCaseCourante = 0; indiceCaseCourante <= NB_CASES-1; indiceCaseCourante++)
    {
        sommeTab += tab[indiceCaseCourante];
    }
    
    // sommeTab, NB_CASES >> calculMoyenneDuTableau >> moyenneTab ****************************************************************
    moyenneTab = 0;
    moyenneTab = static_cast<float>(sommeTab)/static_cast<float>(NB_CASES);

    // moyenneTab >> afficherMoyenneDuTableau >> (écran) *************************************************************************
    cout << "La moyenne du tableau est de " << moyenneTab << endl;

    return 0;
}