/*
 Programme : Validation d'un module d'enseignement
 But :  Permet de vérifier si un étudiant est admis ou non
 Date de dernière modification : 16/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES ***************************************************************************************************************
    // *************************************************************************************************************************

    
    float noteOral; // Note de l'oral sans coefficient
    float noteEcrit; // Note de l'écrit sans coefficient
    float moyenne; // Moyenne de l'étudiant des 2 épreuves
    float coefficientOral = 1; // Coefficient de l'épreuve orale
    float coefficientEcrit = 2; // Coefficient de l'épreuve écrite
    float noteCoeffEcrit; // Note de l'écrit avec coefficient
    float noteCoeffOral; // Note de l'écrit avec coefficient
    float totalCoeff; // Total des coefficients


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************


    // clavier >> saisirNoteOral >> noteOral *************************************************************************************
    cout << "Note oral :";
    cin >> noteOral;

    // clavier >> saisirNoteEcrit >> noteEcrit ***********************************************************************************
    cout << "Note écrit :";
    cin >> noteEcrit;
    
    // noteOral, noteEcrit >> calculMoyenne >> moyenne ***************************************************************************

    noteCoeffEcrit = noteEcrit*coefficientEcrit;
    noteCoeffOral = noteOral*coefficientOral;
    totalCoeff = coefficientOral + coefficientEcrit;
    moyenne = (noteCoeffEcrit+noteCoeffOral)/totalCoeff;

    // moyenne >> afficherResultat >> ecran **************************************************************************************

    if (moyenne < 10)
    {
        cout << "Non recu" << endl;
    }
    else{
        cout << "Recu" << endl;
    }
    

    return 0;
}