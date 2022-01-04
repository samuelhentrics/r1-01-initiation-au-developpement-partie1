/*
 Programme : Compter nb employe dans une ville
 But :  Determine le nombre d'employe dans une ville
 Date de dernière modification : 27/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

// TYPES *************************************************************************************************************************
// *******************************************************************************************************************************

struct Adresse
{
    string numRue;
    string nomRue;
    unsigned short int codePostal;
    string ville;
};

struct Personne{
    string nom;
    string prenom;
    Adresse adresse;
};

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

unsigned short int nbEmployesVille(const Personne employes[], unsigned short int taille, string villeRecherche);
    // But : Retourne le nombre d'employés habitant dans une ville 



// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    const unsigned int NBRE_EMPLOYES = 15; // nombre d'employés dans la structure
    Personne listeEmployes[NBRE_EMPLOYES] = { // nom, prénom et adresse des employés
        {"Almeras", "Valentin", {"29", "impasse Michelle Reynaud", 64600, "Anglet"}},
        {"Gueguen", "Lucie", {"631bis", "rue Leconte", 64100, "Bayonne"}},
        {"Pomeroy", "Thibault", {"158", "boulevard Devaux", 64200, "Biarritz"}},
        {"Souchon", "Elodie", {"68", "chemin Eric Pascal", 64200, "Biarritz"}},
        {"Besnard", "Emmanuel", {"08", "place Ferrand", 64600, "Anglet"}},
        {"Gaudreau", "Lucien", {"46", "impasse Simone Humbert", 64100, "Bayonne"}},
        {"Duret", "Christelle", {"02bis", "Chemin Imbert", 64200, "Biarritz"}},
        {"Laffitte", "Anna", {"31", "rue Lemoins", 64600, "Anglet"}},
        {"Barbier", "Remi", {"88", "impasse Richard Marin", 64100, "Bayonne"}},
        {"Blondeau", "Denise", {"83", "avenue Laroche", 64200, "Biarritz"}},
        {"Berlioz", "Gabriel", {"55", "rue Descamps", 64100, "Bayonne"}},
        {"Dupont", "Benjamin", {"40", "boulevard Duvois", 64200, "Biarritz"}},
        {"Maret", "Ludovic", {"76", "impasse de Meunier", 64600, "Anglet"}},
        {"Boutin", "Alain", {"13", "boulevard de Guillou", 64200, "Biarritz"}},
        {"Dubuisson", "Marie", {"24", "rue Capucine Chevallier", 64600, "Anglet"}}
    };
    string ville;

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // (clavier) >> saisirVille >> ville
    cout << "Saisir ville recherchée :";
    cin >> ville;

    // ville, NBR_EMPLOYES, listeEmployes >> afficherNbEmployesDansLaVille >> (écran) ********************************************
    cout << "Le nombre d'employés dans la ville est de " << nbEmployesVille(listeEmployes, NBRE_EMPLOYES, ville) << endl;

    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

unsigned short int nbEmployesVille(const Personne employes[], unsigned short int taille, string villeRecherche){
    // VARIABLES
    unsigned short int nbEmployesVille;
    unsigned short int indiceCaseCourante;

    // TRAITEMENTS

    // () >> initialiserNbEmployesVille >> nbEmployesVille
    nbEmployesVille = 0;

    // villeRecherche, employes, taille, nbEmployesVille >> compterNbEmployesDUneVille >> nbEmployesVille

    for (indiceCaseCourante = 0; indiceCaseCourante <= taille-1; indiceCaseCourante++)
    {
        if (employes[indiceCaseCourante].adresse.ville == villeRecherche)
        {
            nbEmployesVille++;
        }
        
    }
    
    
    return nbEmployesVille;
}