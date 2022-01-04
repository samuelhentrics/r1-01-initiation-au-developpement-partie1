/*
 Programme : Max de deux nombres
 But :  Afficher le plus grand nombre de deux nombres
 Date de dernière modification : 30/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES ***************************************************************************************************************
    // *************************************************************************************************************************

    double nombre1; // Premier nombre saisie qui va être comparé au second.
    double nombre2; // Second nombre saisie qui va être comparé au premier.
    double max; // Maximum entre le premier et le deuxieme nombre

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // () >> saisirDonnees >> nombre1, nombre2
    // (clavier) >> saisirNombre1 >> nombre1

    cout << "Saisir nombre 1 : ";
    cin >> nombre1;

    // (clavier) >> saisirNombre2 >> nombre2

    cout << "Saisir nombre 2 : ";
    cin >> nombre2;

    // nombre1, nombre2 >> trouverMaximumNombre >> [max]
    if (nombre1 < nombre2)
    {
        max = nombre2;
    }
    else if (nombre1 > nombre2)
    {
        max = nombre1;
    }

    // [max] >> afficher >> (écran)
    if (nombre1 == nombre2){
        cout << "Les nombres sont égaux" << endl;
    }
    else{
        cout << "La plus grande valeur est " << max << endl;
    }

    return 0;
}