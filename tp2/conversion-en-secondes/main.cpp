/*
 Programme : Conversion en secondes
 But :  A partir d'une durée exprimée en heures et minutes, retourner la durée en seconde
 Date de dernière modification : 12/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double heures; // Heure de la durée donnée
    double minutes; // Minute de la  durée donnée
    double heuresensecondes; // Conversion des heures en secondes
    double minutesensecondes; // Conversion des minutes en secondes
    double secondes; // Durée exprimé en secondes grâce à l'information de la durée en heures et en minutes

    // TRAITEMENTS
    // clavier >> saisirheures >> heures
    cout << "Heures : ";
     cin >> heures;
    
    // clavier >> saisirminutes >> minutes
    cout << "Minutes : ";
     cin >> minutes;

    // heures >> conversionheuresversheures >> heuresensecondes
    heuresensecondes = heures*3600;

    // minutes >> conversionminutesversheures >> minutesensecondes
    minutesensecondes = minutes*60;

    // minutesensecondes, heuresensecondes >> calculensecondes >> secondes
    secondes = heuresensecondes + minutesensecondes;

    // prixfinal >> afficherprixfinal >> écran
    cout << "La duree est donc de " << secondes << " secondes." << endl;

    return 0;
}