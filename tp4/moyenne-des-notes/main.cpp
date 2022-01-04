/*
 Programme : Moyenne des notes (infini)
 But :  Afficher la moyenne de plusieurs notes
 Date de dernière modification : 30/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES ***************************************************************************************************************
    // *************************************************************************************************************************

    float note; // Note saisie pour calculer la moyenne
    float moyenne; //  Moyenne de toutes les notes
    float sommeNotes; // Somme de toutes les notes
    float nbNotes; // Nombre total de notes saisies
    const unsigned short int VAL_ARRET = 999; //

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // () >> saisirNotesEtAccumuler >> nbNotes, sommeNotes
    // () >> initialiserAccumulateurEtCompteur >> sommeNotes, nbNotes
    sommeNotes = 0;
    nbNotes = 0;


    // () saisirNotesEtAccumulerEtCompter >> [sommeNotes], [nbNotes]
    while(true){
        // (clavier) >> saisirNote >> note
        cout << "Entrez une note : ";
        cin >> note;

        // note, VAL_ARRET >> verifArret >> ()
        if(note == VAL_ARRET){
            break;
        }

        // note, nbNotes, sommesNotes >> traiterNote >> [sommeNotes], [nbNotes]
        if (note >=0 && note <=20){
            sommeNotes += note;
            nbNotes++;
        }
        else{
            cout << "Valeur incorrecte, une note doit être comprise entre 0 et 20." << endl;
        }
    }


    // sommeNotes, nbNotes >> calculMoyenne >> [moyenne]
    if (nbNotes > 0)
    {
        moyenne = sommeNotes/nbNotes;
    }
    

    // [moyenne], nbNotes >> afficherMoyenne >> (écran)
    if (nbNotes > 0){
        cout << "Moyenne : " << moyenne << endl;
    }
    else{
        cout << "Impossible de calculer la moyenne, aucune note n'a été saisie." << endl;
    }

    return 0;
}