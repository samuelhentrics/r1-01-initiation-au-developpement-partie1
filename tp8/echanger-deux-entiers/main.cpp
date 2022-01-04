/*
 Programme : Echanger deux entiers
 But :  Echanger deux entiers
 Date de dernière modification : 21/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

void echangerDeuxEntiers(int& valeur1, int& valeur2);
    // But : Echanger la valeur de valeur1 et valeur2

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    int nb1; // Nombre 1 saisi par l'utilisateur qui sera échangé par nb2
    int nb2; // Nombre 2 saisi par l'utilisateur qui sera échangé par nb1


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // (clavier) >> saisirNb1 >> nb1  ********************************************************************************************
    cout << "Entrez le premier nombre à échanger : ";
    cin >> nb1;
    
    // (clavier) >> saisirNb2 >> nb2 *********************************************************************************************
    cout << "Entrez le deuxieme nombre à échanger : ";
    cin >> nb2;

    // nb1, nb2 >> echangerLesEntiers >> nb1,nb2 *********************************************************************************
    echangerDeuxEntiers(nb1, nb2);

    // nb1, nb2 >> afficherLesEntiers >> (écran) *********************************************************************************
    cout << "Le premier nombre est égal à " << nb1 << " et le second à " << nb2 << endl; 

    return 0;
}

// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************


void echangerDeuxEntiers(int& valeur1, int& valeur2){
    int valeur1Copie; // Contient une copie de valeur1 afin d'échanger les nombres
    valeur1Copie = valeur1;
    valeur1 = valeur2;
    valeur2 = valeur1Copie;
}