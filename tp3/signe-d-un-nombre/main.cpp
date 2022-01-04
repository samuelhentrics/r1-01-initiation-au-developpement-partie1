/*
 Programme : Signe d'un nombre
 But :  Permet de déterminer le signe d'un nombre
 Date de dernière modification : 16/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES ***************************************************************************************************************
    // *************************************************************************************************************************

    float nombre; // Nombre saisie par l'utilisateur dont il faut déterminer le signe
    string signe; // Signe du nombre en toutes lettres


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // clavier >> saisirNombre >> nombre *****************************************************************************************
    cout << "Nombre :";
     cin >> nombre;

    // nombre >> determinerSigne >> signe ****************************************************************************************

    if (nombre < 0){
        signe = "négatif";
    }
    else if(nombre > 0){
        signe = "positif";
    }
    else{
        signe = "nul";
    }

    // signe >> afficherSigne >> ecran *******************************************************************************************

    cout << "Ce nombre est " << signe << endl;

    return 0;
}