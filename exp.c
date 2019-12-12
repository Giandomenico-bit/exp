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

  double expt = 1.0, esponente;
  int i, fact = 1;

  printf( "Inserisci esponente : " );
  scanf( "%lf", &esponente );

  for( i = 1; i <= 10; i++ ){
    fact = fact * i;
    expt = expt + ( pow( esponente, i ) / ( double )fact );
  }

  printf( "exp = %lf\n", expt );
  printf( "%lf\n", exp( esponente ) );

  return 0;
}
