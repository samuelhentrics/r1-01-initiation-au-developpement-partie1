/*
 Programme : Profitons des soldes
 But :  A partir d'un prix donné et d'une réduction afficher la réduction
 Date de dernière modification : 12/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double prixinitial; // Prix de l'article sans réduction afin de calculer le prix final
    double pourcentagereduction; // Pourcentage de la réduction afin de calculer le prix final
    double prixfinal; // Prix final de l'article après réduction sur le prix initial

    // TRAITEMENTS
    // clavier >> saisirprixinitial >> prixinitial
    cout << "Prix initial : ";
     cin >> prixinitial;
    
    // clavier >> saisirpourcentagereduction >> pourcentagereduction
    cout << "Réduction en pourcentage : ";
     cin >> pourcentagereduction;

    // prixinitial, pourcentagereduction >> calculprixfinal >> prixfinal
    prixfinal = prixinitial- prixinitial*(pourcentagereduction/100);

    // prixfinal >> afficherprixfinal >> écran
    cout << "Le prix apres reduction est de " << prixfinal << " euros." << endl;

    return 0;
}