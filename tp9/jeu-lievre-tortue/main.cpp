/*
 Programme : Le jeu du lièvre et de la tortue
 But :  Simule des courses entre le lièvre et la tortue
 Date de dernière modification : 27/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
#include "game-tools.h"
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************
string course(string lievre, string tortue, unsigned short int nbCases);
    // But : simule une course

// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    string joueur1;
    string joueur2;
    const unsigned short int NB_CASES=6;

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************
    
    // () >> saisirLievre >> joueur1
    cout << "Nom du lièvre :";
    cin >> joueur1;
    
    // () >> saisirLievre >> joueur1
    cout << "Nom de la tortue :";
    cin >> joueur2;

    // joueur1, joueur2, NB_CASES >> afficherGagnant >> (écran)
    cout << "Le gagnant est " << course(joueur1,joueur2,NB_CASES);
    

    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

string course(string lievre, string tortue, unsigned short int nbCases){
    // VARIABLES LOCALES
    unsigned short int de;
    unsigned short int caseTortue;
    string gagnant;

    // TRAITEMENT DU SOUS PROGRAMME
    // () >> initVariable >> caseTortue
    caseTortue = 0;
    // lievre, tortue, nbCases >> jouerJeu >> gagnant
    while (true)
    {
        // () >> lancerDe >> de
        de = static_cast<unsigned short int>(random(0,6));

        // de, tortue >> tortueGagne >> gagnant
        if (caseTortue==nbCases)
        {
            gagnant = tortue;
            break;
        }

        // de, lievre >> lievreGagne >> gagnant
        if (de==nbCases)
        {
            gagnant = lievre;
            break;
        }
        
        // caseTortue >> incrementerCaseTortue >> caseTortue
        caseTortue++;
        
    }
    
    // gagnant >> retournerGagnant >> return
    return gagnant;

}