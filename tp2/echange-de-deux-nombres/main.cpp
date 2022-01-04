/*
 Programme : Echange de deux nombres
 But :  Echanger le premier nombre (nb1) et le second nombre (nb2)
 Date de dernière modification : 08/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/
#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nb1; // Le nombre a échanger avec nb2
    double nb2; // Le nombre a échanger avec nb1
    double copienb1; // Copie de la valeur de nb1

    // TRAITEMENTS
    // clavier >> saisirNb1 >> nb1
     cout << "Premier nombre :  ";
     cin >> nb1;

    // clavier >> saisirNb2 >> nb2
    cout << "Deuxieme nombre :  ";
     cin >> nb2;

    // nb1, nb2 >> echangerNombres >> nb1,nb2
    copienb1 = nb1;
    nb1 = nb2;
    nb2 = copienb1;

    //  nb1, nb2 >> afficherNombresEchanges >> écran
    cout << "Apres echange, le premier nombre vaut " << nb1 << " et le deuxieme nombre vaut " << nb2 << endl;

    return 0;
}