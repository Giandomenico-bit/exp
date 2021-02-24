/* Exp
Si scriva un programma C che approssimi il valore
di ex mediante la formula:

e^x = 1 + x/1! + x^2/2! + x^3/3! + ...
Si utilizzino 10 termini della serie.

Confrontare il risultato ottenuto con quello calcolato
mediante la funzione exp() della libreria matematica.

*/

#include <stdio.h>
#include <math.h>

int main( void ){

  double expt, esponente;
  int termine, fact;

  expt = 1.0;
  fact = 1;

  printf( "%s", "Inserisci esponente : " );
  scanf( "%f", &esponente );

  for( termine = 1; termine <= 10; termine++ ){
      fact = fact * termine;
      expt = expt + ( pow( esponente, termine ) / ( double )fact );
  }

  printf( "exp = %f\n", expt );
  printf( "%f\n", exp( esponente ) );

  return 0;
}
