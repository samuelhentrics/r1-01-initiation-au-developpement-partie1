  /*
  Programme : Valeur entre 10 et -10
  But : Ce programme affiche tous les entiers compris dans l'intervalle 10 à -10

  Date de création : 3 novembre 2013
  Date de dernière modification :
  Auteur : P. Etcheverry
  Remarques : Programme erroné. A Utiliser pour apprendre à utiliser le débogueur.
*/

#include <iostream>
using namespace std;

int main (void)
{
  // Défintion des bornes de l'intervalle à afficher  
  const int VALEUR_DEPART = 10;
  const int VALEUR_ARRIVEE = -10;

  // Affichage des entiers compris dans l'intervalle
  for (int i = VALEUR_DEPART ; i >= VALEUR_ARRIVEE ; i--)
  {
      cout << i << " ";
  }

  return 0;
}
