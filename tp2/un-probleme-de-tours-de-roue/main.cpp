/*
 Programme : Tours de roue
 But :  Permet de calculer le nombre de tours de roue à partir d'une distance et du rayon d'une roue
 Date de dernière modification : 08/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{
    // VARIABLES
    double rayonrouecm; // Rayon de la roue du vélo exprimé en cm
    double rayonrouekm; // Rayon de la roue du vélo exprimé en km
    double distancekm; // Distance à réaliser exprimée en km
    const double pi = 3.14; // Valeur de pi
    double perimetre; // Perimètre de la roue
    double nbtour; // Nombre de tour necessaire

    // TRAITEMENTS
    // clavier >> saisirDistance >> distancekm
     cout << "Distance a parcourir (km) :  ";
     cin >> distancekm;

    // clavier >> saisirRayonRoueCm >> rayonrouecm
    cout << "Rayon roue (cm) :  ";
     cin >> rayonrouecm;

    // pi, distancekm, rayonrouecm >> calculNbTour >> nbtour

    // rayonrouecm >> convertirRayonRoueKM >> rayonrouekm
    rayonrouekm = rayonrouecm/100000;

    // rayonrouekm, pi >> convertirRayonRoueKM >> perimetre
    perimetre = 2*pi*rayonrouekm;

    // distancekm, perimetre >> convertirRayonRoueKM >> nbtour
    nbtour = distancekm/perimetre;

    //  nb1, nb2 >> afficherNombresEchanges >> écran
    cout << "Le nombre de tour a realiser est de " << round(nbtour) << " tours." << endl;

    return 0;
}