/*
 Programme : Nombres premiers par la méthoe d'Eratosthène
 But :  Trouve les nombres premiers selon une borne donnée
 Date de dernière modification : 21/10/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
#include <cmath>
using namespace std;

// DECLARATION DES SOUS-PROGRAMMES ***********************************************************************************************
// *******************************************************************************************************************************

void nbPremiers(bool tab[], const unsigned short int& BORNE);
    // But : Trouve les nombres premiers


// PROGRAMME PRINCIPAL ***********************************************************************************************************
// *******************************************************************************************************************************
int main (void)
{

    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************
    const unsigned short int BORNE_RECHERCHE_PREMIERS = 20;
    bool tabNb[BORNE_RECHERCHE_PREMIERS] = {true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,};


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************
    nbPremiers(tabNb, BORNE_RECHERCHE_PREMIERS);

    for (size_t i = 0; i <= BORNE_RECHERCHE_PREMIERS; i++)
    {
        cout << tabNb[i] << ", ";
    }
    
    


    return 0;
}


// SOUS-PROGRAMMES ***************************************************************************************************************
// *******************************************************************************************************************************

void nbPremiers(bool tab[], const unsigned short int& BORNE){
    tab[0]=false;
    tab[1]=false;
    for (unsigned short int i = 2; i <= static_cast<unsigned short int>(sqrt(BORNE))-1; i++)
    {  
    }
    
    
}