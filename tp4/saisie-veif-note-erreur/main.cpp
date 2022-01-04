/*
 Programme : Saisie d'une note avec erreur
 But :  Permet de saisir une note entre 0 et 20. Si note supérieur à 20 ou inférieur à 0 afficher un message d'erreur.
 Date de dernière modification : 23/09/2021
 Auteur : Samuel HENTRICS LOISTINE
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES *****************************************************************************************************************
    // ***************************************************************************************************************************

    float note; // Note saisie au clavier


    // TRAITEMENTS ***************************************************************************************************************
    // ***************************************************************************************************************************


    //       >> messageNote >> écran *********************************************************************************************
    cout << "Entrez une note entre 0 et 20 : ";

    // clavier >> verificationNote >> note ***************************************************************************************

    while (true)
    {
        // clavier >> saisirNote >> note ****************************************************************************************
        cin >> note;

        // note >> determinerNoteCorrecte >> [break] ****************************************************************************
        if(note >=0 && note <=20){
            break;
        }

        //        >> afficherErreur >> écran ************************************************************************************
        cout << "La valeur doit etre comprise entre 0 et 20. Recommencez : ";
    }
    

    //      >> afficherMessage >> écran *****************************************************************************************

    cout << "Merci" << endl;

    return 0;
}