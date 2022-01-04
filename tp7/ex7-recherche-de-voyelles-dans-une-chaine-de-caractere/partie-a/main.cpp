/*
 Programme : Effectif d'un groupe de tp
 But :  Calcul de l'effectif d'un groupe de tp
 Date de dernière modification : 13/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    
    string chaine; // Chaîne de caractère dans laquelle on recherche la 1ère voyelle
    bool trouve; // Indique si la chaine est composée d'au moins une voyelle
    unsigned short int posCourante; // Position du caractère courant dans la chaîne
    unsigned short int posDerLettre; // Position de la dernière lettre de la chaîne

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // (clavier) >> saisirChaine >> chaine ***************************************************************************************
    cout << "Chaine : ";
    cin >> chaine;

    // () >> initialiserRecherche >> trouve, posCourante, posDerLettre ***********************************************************
    posCourante = 0;
    trouve = false;
    posDerLettre = static_cast<unsigned short int>(chaine.size()-1);

    // chaine, trouve, posCourante, posDerLettre >> effectuerRecherche >> trouve, posCourante ************************************
    while (true)
    {
        // posCourante, posDerLettre >> determinerSiAnalyserTousCaracteres >> () *************************************************
        if (posCourante > posDerLettre)
        {
            break;
        }

        // chaine, posCourante >> verifierCaractereEstVoyelle >> [trouve] ********************************************************
        if (chaine[posCourante] == 'a' || chaine[posCourante] == 'e' || chaine[posCourante] == 'i' || chaine[posCourante] == 'o' ||
             chaine[posCourante] == 'u' || chaine[posCourante] == 'y')
        {
            trouve = true;
            break;
        }

        // posCour >> passerCaractereSuivant >> posCour
        posCourante++;
        
    }

    // posCour >> afficherVoyelle >> (écran)
    if (trouve == false){
        cout << "Il n'y a pas de voyelle" << endl;
    }
    else{
        cout << "Position de la premiere voyelle : " << posCourante << endl;
    }

    
    
    
    

    return 0;
}