/*
 Programme : Calculer le nombre d'étudiants ayant la moyenne et le nombre d'étudiants n'ayant pas la moyenne
 But :  Calcule ceux ayant eu la moyenne et ceux ne l'ayant pas eu
 Date de dernière modification : 21/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// ENREGISTREMENT ************************************************************************************************************
// ***************************************************************************************************************************

struct UnEtudiant
{
    string nom; // nom de l'étudiant
    string prenom; // prénom de l'étudiant
    float note; // note obtenue à l'examen
};

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

void inverserTableau(UnEtudiant tab[], const unsigned short int& NB_CASES, unsigned short int& nbMoySup, unsigned short int& nbMoyInf);
    // But : Inverser les valeurs d'un tableau


// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************


    // Nombre d'étudiants inscrits en semestre 1 :
    const unsigned short int EFFECTIF_S1 = 15;

    // Résultats examen du 15 février :
    UnEtudiant notesExamDu15fevrier[EFFECTIF_S1] = {
        {"Almeras", "Valentin", 15}, {"Gueguen", "Lucie", 8.5},
        {"Pomeroy", "Thibault", 4.5}, {"Souchon", "Elodie", 18},
        {"Besnard", "Emmanuel", 12}, {"Gaudreau", "Lucien", 0},
        {"Duret", "Christelle", 10.5}, {"Laffitte", "Anna", 13},
        {"Barbier", "Remi", 15}, {"Blondeau", "Denise", 7},
        {"Berlioz", "Gabriel", 9.5}, {"Dupont", "Benjamin", 3},
        {"Maret", "Ludovic", 13.5}, {"Boutin", "Alain", 12},
        {"Dubuisson", "Marie", 19}};

    unsigned short int nbMoy; // Nombre d'étudiants ayant la moyenne
    unsigned short int nbPasMoy; // Nombre d'étudiants n'ayant pas la moyenne

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // notesExamDu15fevrier, EFFECTIF_S1, nbMoy, nbPasMoy >> compterValPositives >> nbMoy, nbPasMoy ******************************
    inverserTableau(notesExamDu15fevrier, EFFECTIF_S1, nbMoy, nbPasMoy);

    // notesExamDu15fevrier, EFFECTIF_S1 >> afficherTableau >> (écran) ***********************************************************
    cout << "Nombre d'élèves ayant la moyenne : " << nbMoy << " et pas la moyenne : " << nbPasMoy;
    


    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

void inverserTableau(UnEtudiant tab[], const unsigned short int& NB_CASES, unsigned short int& nbMoySup, unsigned short int& nbMoyInf){
    // () >> initVariables >> nbMoySup *******************************************************************************************
    nbMoySup = 0;

    // NB_CASES >> calculerNbMoySup >> nbMoySup **********************************************************************************
   for (unsigned short int indiceCaseCourante = 0; indiceCaseCourante <= NB_CASES-1 ; indiceCaseCourante++)
   {
       if (tab[indiceCaseCourante].note >=10)
       {
           nbMoySup++;
       }
   }
   
   // nbMoySup, NB_CASES >> calculerNbMoyInf >> nbMoyInf
    nbMoyInf = static_cast<unsigned short int>(NB_CASES-nbMoySup);
}