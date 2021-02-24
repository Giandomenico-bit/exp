/* Nepero
Si scriva un programma C che approssimi il valore
della costante e (termineAggiuntoero di Nepero) mediante la formula:

e = 1 + 1/1! + 1/2! + 1/3! + ...
Si effettui due volte il calcolo. Nel primo caso
utilizzando 10 termini. Nel secondo arrestando il
ciclo quando il termine aggiunto non modifica più
la terza cifra decimale della somma calcolata.

Quanti termini sono necessari?

*/

#include <stdio.h>

int main( void ){

  int termine, fattoriale;
  double costanteE, costantePrec, costanteSucc;

  fattoriale = 1;
  costanteE = 0.0;

  for( termine = 1; termine <= 10; termine++ ) {
       fattoriale = fattoriale * termine;
       costanteE = costanteE + 1.0 / ( double )fattoriale;
  }

  fattoriale = termine = 1;
  costanteSucc = costanteE;

  do {
      costantePrec = costanteSucc;
      fattoriale = fattoriale * termine;
      costanteSucc = costanteSucc + 1.0 / ( double )fattoriale;
      termine++;

  } while( costanteSucc - costantePrec > 0.001  );

  printf( "e = %f\n", costanteE );
  printf( "Sono necessari %d passaggi\n", termine - 1 );

  return 0;
}
