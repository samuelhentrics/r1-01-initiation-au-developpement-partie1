/*
 Programme : Calculette
 But :  Permet de calculer à partir d'une valeur 1 et valeur 2 et d'un opérant donné
 Date de dernière modification : 16/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES ***************************************************************************************************************
    // *************************************************************************************************************************


    float val1; // 1ere valeur de l'opération
    float val2; // 2eme valeur de l'opération
    float resultat; // Résultat de l'opération
    char oper; // Operation à realiser entre val1 et val2
    bool opInv; // Indique de l'opérateur est invalide
    bool divZero; // Indique une division par 0


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************

    // clavier >> saisirVal1 >> val1 *********************************************************************************************
    cout << "Saisir valeur 1: ";
     cin >> val1;

    // clavier >> saisirOper >> oper *********************************************************************************************
    cout << "Saisir opérateur: ";
     cin >> oper;
    
    // clavier >> saisirVal2 >> val2 *********************************************************************************************
    cout << "Saisir valeur 2: ";
     cin >> val2;

    // val1, val2, oper >> calculer >> [resultat], operInv, divZero **************************************************************

    switch (oper){
        case '+' :
        resultat = val1 + val2;
        break;

        case '-':
        resultat = val1 - val2;
        break;

        case '*':
        resultat = val1 * val2;
        break;

        case '/':
        if (val2 != 0)
        {
            resultat = val1 / val2; 
        }
        else divZero = true;
        break;

        default:
        opInv = true;
        break;
    }

    // [resultat], opInv, divZero >> afficherResultat >> ecran ********************************************************************
    
    if (opInv)
    {
        cout << "Opérande invalide" << endl;
    }
    else{
        if (divZero)
        {
            cout << "Division par 0 invalide" << endl;
        }
        else{
            cout << "Le resultat de l'opération est " << resultat << endl;
        }
    }
    return 0;
}