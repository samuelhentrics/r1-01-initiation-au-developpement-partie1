/*
 Programme : Echanger deux cases dans un tableau
 But :  Echange deux cases dans un tableau grâce à deux indices donnés
 Date de dernière modification : 21/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

void echangerCasesTab(int tab[], unsigned short int indice1, unsigned short int indice2);
    // But : Echanger deux cases dans un tableau

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    const unsigned short int NB_CASES = 5; // Nombre de cases dans le tableau
    int tableau[NB_CASES] = {-1,0,1,2,3}; // Tableau contenant des entiers
    unsigned short int case1; // Case 1 du tableau qui va être modifié par la case 2
    unsigned short int case2; // Case 2 du tableau qui va être modifié par la case 1


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // (clavier) >> saisirCase1 >> case1  ****************************************************************************************
    cout << "Entrez la case du tableau a echanger : ";
    cin >> case1;
    
    // (clavier) >> saisirCase2 >> case2 *****************************************************************************************
    cout << "Entrez la case du tableau a echanger : ";
    cin >> case2;

    // tableau, case1, case2 >> echangerCasesTab >> tab **************************************************************************
    echangerCasesTab(tableau, case1, case2);

    // tab >> afficherTableau >> (écran) *****************************************************************************************
    for (unsigned short int i = 0; i <= NB_CASES-1; i++)
    {
        cout << tableau[i] << ", ";
    }
    

    return 0;
}

// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************


void echangerCasesTab(int tab[], unsigned short int indice1, unsigned short int indice2){
    int valeurCase1Copie; // Contient une copie de valeur1 afin d'échanger les nombres
    valeurCase1Copie = tab[indice1];
    tab[indice1] = tab[indice2];
    tab[indice2] = valeurCase1Copie;
}