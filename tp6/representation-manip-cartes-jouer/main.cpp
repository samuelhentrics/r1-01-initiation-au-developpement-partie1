/*
 Programme : Representation et manipulation de cartes à jouer
 But :  Afficher la meilleure carte entre deux cartes
 Date de dernière modification : 07/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // TYPES *********************************************************************************************************************
    // ***************************************************************************************************************************

    enum Valeur{deux=2,trois,quatre,cinq,six,sept,huit,neuf,dix,valet,dame,roi,as};
    enum Couleur {carreau,trefle,coeur,pique};
    struct Carte{
        Valeur val;
        Couleur coul;
    };


    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************


    Carte carte1 = {quatre,carreau}; // Carte une qui va être comparée à la carte deux
    Carte carte2 = {as,coeur}; // Carte deux qui va être comparée à la carte une
    Carte carteGagnante; // Variable qui va obtenir contenir la carte la plus forte
    bool egalite; // Permet de vérifier si les cartes sont égales
    

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************


    // carte1, carte2 >> determinerCarteForte >> [carteGagnante], egalite ********************************************************
    egalite = false;
    
    if (carte1.val > carte2.val)
    {
        carteGagnante = carte1;
    }
    else if (carte2.val > carte1.val)
    {
        carteGagnante = carte2;
    }
    else{
        egalite = true;
    }
    
    // egalite, [carteGagnante] >> afficherCarteLaPlusForte >> () ****************************************************************
    if (egalite)
    {
        // () >> afficherCartesEgales >> () **************************************************************************************
        cout << "Les 2 cartes sont de mêmes forces" << endl;
    }
    else
    {
        // carteGagnante >> afficherCarteGagnante >> () **************************************************************************

        // carteGagnante >> afficherValeurCarteGagnante >> () ********************************************************************
        switch (carteGagnante.val){
            case valet: cout << "Valet"; break;
            case dame: cout << "Dame"; break;
            case roi: cout << "Roi"; break;
            case as: cout << "As"; break;
            default: cout << carteGagnante.val << endl; break;
        }

        // carteGagnante >> afficherCouleurCarteGagnante >> () ***********************************************************************
        switch (carteGagnante.coul){
            case coeur: cout << " de coeur" << endl; break;
            case carreau: cout << " de carreau" << endl; break;
            case pique: cout << " de pique" << endl; break;
            case trefle: cout << " de trefle" << endl; break;
            default: break;
        }
    }
    

    return 0;
}