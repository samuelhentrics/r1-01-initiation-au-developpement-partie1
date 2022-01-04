/*
 Programme : Moyenne des valeurs d'un tableau de nombres
 But :  Permet à partir d'un tableau de nombre de calculer la moyenne
 Date de dernière modification : 27/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

float moyenne(const float tab[], unsigned short int taille);
    // But : Retourne la moyenne du tableau


// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    const unsigned short int NB_CASES = 5; // Nombre de cases du tableau de notes
    float notes[NB_CASES] = {5,10,15,20,17}; // Tableau de notes
    float moyenneTab; // Moyenne du tableau de notes

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************
 
    // notes, NB_CASES >> calculerMoyenneTableau >> moyenneTab
    moyenneTab = moyenne(notes,NB_CASES);

    // moyenneTab >> afficherMoyenneTableau >> (écran)
    cout << moyenneTab << endl;

    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

float moyenne(const float tab[], unsigned short int taille){
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    float sommeTab; // Somme de tous les nombres du tableau traité
    unsigned short int indiceCaseCourante; // Indice de la case courante traitée

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // tab, taille >> calculerSommeTab >> sommeTab *******************************************************************************
    sommeTab =0;
    for (indiceCaseCourante = 0; indiceCaseCourante < taille; indiceCaseCourante++)
    {
        sommeTab += tab[indiceCaseCourante];
    }

    // sommeTab, taille >> retournerMoyenne >> nombre à virgules *****************************************************************
    return sommeTab/taille;
    
}