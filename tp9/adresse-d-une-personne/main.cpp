/*
 Programme : Adresse d'une personne
 But :  Determine l'adresse d'une personne
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

Adresse getAdresse(const Personne& perso);
    // But : Retourne l'adresse d'une personne



// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    Personne client = {"nom", "prenom", {"2bis", "allée du Parc", 64600, "Anglet"}}; // Client
    Adresse adresseClient; // Adresse du client

    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************
 
    // client >> obtenirAdresse >> adresseClient *********************************************************************************
    adresseClient = getAdresse(client);

    // note >> afficherNoteCorrecte >> (écran) ***********************************************************************************
    cout << adresseClient.numRue << adresseClient.nomRue << adresseClient.ville << adresseClient.codePostal << endl;

    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

Adresse getAdresse(const Personne& perso){
    return perso.adresse;
}