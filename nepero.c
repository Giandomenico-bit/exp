/* Nepero
Si scriva un programma C che approssimi il valore
della costante e (numero di Nepero) mediante la formula:

e = 1 + 1/1! + 1/2! + 1/3! + ...
Si effettui due volte il calcolo. Nel primo caso
utilizzando 10 termini. Nel secondo arrestando il
ciclo quando il termine aggiunto non modifica più
la terza cifra decimale della somma calcolata.

Quanti termini sono necessari?

*/

#include <stdio.h>

int main( void ){

  int i;
  float e, fact = 1;
  float num;
  int digit;
  int count = 0;

  for( i = 1; i <= 10; i++ ){
    fact = fact * i;
    e = e + 1.0 / ( float )fact;
  }

  printf( "e =  %f\n", e );

  e = 0;
  fact = 1;

  for( i = 1; ; i++ ){
    fact = fact * i;
    e = e + 1.0 / ( float )fact;

    num = 1.0 / ( float )fact;
    digit = num * 1000;
    digit = digit % 10;

    if( i > 2 && digit == 0 ) break;
    count = count + 1;

  }

  printf( "Sono necessari %d\n", count + 1 );

  return 0;
}
