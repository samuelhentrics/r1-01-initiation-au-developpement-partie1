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
    // TYPES *********************************************************************************************************************
    // ***************************************************************************************************************************
    struct Etudiant
        {
            string nom;            // nom de l'étudiant
            string prenom;         // prénom de l'étudiant
            unsigned short int td; // numéro de TD de l'étudiant
            unsigned short int tp; // numéro de TP de l'étudiant
        };
    

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    // Nombre d'étudiants inscrits en semestre 1
    const unsigned int EFFECTIF_S1 = 15;
    
    // Etudiants inscrits en semestre 1 :
    Etudiant etudiantsS1[EFFECTIF_S1] = {
        {"Almeras", "Valentin", 1, 1}, {"Gueguen", "Lucie", 1, 1},
        {"Pomeroy", "Thibault", 1, 1}, {"Souchon", "Elodie", 1, 2},
        {"Besnard", "Emmanuel", 1, 2}, {"Gaudreau", "Lucien", 2, 3},
        {"Duret", "Christelle", 2, 3}, {"Laffitte", "Anna", 2, 4},
        {"Barbier", "Remi", 2, 4},     {"Blondeau", "Denise", 2, 4},
        {"Berlioz", "Gabriel", 2, 4},  {"Dupont", "Benjamin", 3, 5},
        {"Maret", "Ludovic", 3, 5},    {"Boutin", "Alain", 3, 5},
        {"Dubuisson", "Marie", 3, 5}};

    unsigned short int nbEtudiantTp; // Nombre d'étudiants appartenant au tp recherché
    unsigned short int tp; // Numéro du tp qui est recherché
    unsigned short int indiceCaseCourante; // Indice de la case courante

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // (clavier) >> saisirTp >> tp
    cout << "Saisir le tp recherche : ";
    cin >> tp;

    // () >> initialiserLesValeurs >> nbEtudiantTp
    nbEtudiantTp = 0;

    // tabEtudiant, tp, nbEtudiantTp >> rechercherEtudiants >> nbEtudiantTp
    for (indiceCaseCourante = 0; indiceCaseCourante <= EFFECTIF_S1-1; indiceCaseCourante++)
    {
        if (etudiantsS1[indiceCaseCourante].tp == tp){
            nbEtudiantTp++;
        }
    }
    

    // nbEtudiantTp >> afficherNombreEtudiantDansLeTP >> (écran)
    cout << "Il y a " << nbEtudiantTp << " etudiant(s) dans le TP " << tp << endl;

    return 0;
}