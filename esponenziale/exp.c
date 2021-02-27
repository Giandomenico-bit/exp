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

  int termine, fattoriale;
  double esponenziale, esponente, potenza;

  printf( "%s", "Inserisci esponente : " );
  scanf( "%lf", &esponente );

  esponenziale = 1.0;
  fattoriale = 1;
  potenza = esponente;

  for( termine = 1; termine <= 10; termine++ ) {
      fattoriale = fattoriale * termine;
      esponenziale = esponenziale + ( double )potenza / ( double )fattoriale;
      potenza = potenza * esponente;
  }

  printf( "exp1 = %f\n", esponenziale );
  printf( "exp2 = %f\n", exp( esponente ) );

  return 0;
}
