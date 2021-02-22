/* Nepero
Si scriva un programma C che approssimi il valore
della costante e (numeroero di Nepero) mediante la formula:

e = 1 + 1/1! + 1/2! + 1/3! + ...
Si effettui due volte il calcolo. Nel primo caso
utilizzando 10 termini. Nel secondo arrestando il
ciclo quando il termine aggiunto non modifica più
la terza cifra decimale della somma calcolata.

Quanti termini sono necessari?

*/

#include <stdio.h>

int main( void ){

  int termine, fact, count, cifra;
  float e, numero;

  fact = 1;
  e = 0.0;

  for( termine = 1; termine <= 10; termine++ ) {
       fact = fact * termine;
       e = e + 1.0 / ( float )fact;
  }

  printf( "e = %f\n", e );

  e = 0.0;
  fact = 1;
  count = 0;

  for( termine = 1; ; termine++ ) {
       fact = fact * termine;
       e = e + 1.0 / ( float )fact; // calcolo la costante e

       numero = 1.0 / ( float )fact; // termine aggiunto
       cifra = numero * 1000; // mi sposto di 3 posizioni
       cifra = cifra % 10; // calcola la terza cifra decimale

       if( termine > 2 && cifra == 0 )
            break;
       count = count + 1;
  }

  printf( "Sono necessari %d termini\n", count + 1 );

  return 0;
}
