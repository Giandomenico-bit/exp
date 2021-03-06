/* Fattoriale
Il fattoriale di un numero n non negativo si scrive n! ed è definito come:

n! = n * (n-1) * ... * 3 * 2 * 1
Quando n = 0 si pone per convenzione n! = 1.

Ad esempio:

0! = 1
1! = 1
2! = 2 * 1 = 2
3! = 3 * 2 * 1 = 6
Si scriva un programma C che calcoli i fattoriali degli interi da 1 a 5.

Esempio di output:

1!   2!   3!   4!   5!
 1    2    6   24  120

*/

#include <stdio.h>

int main( void ){

  int numero, fattoriale, i;

  do {
    printf( "%s", "Inserisci un numero intero non negativo : " );
    scanf( "%d", &numero );

  } while( numero < 0 );

  fattoriale = 1;
  for( i = 1; i <= numero; i++ ) {
      fattoriale = fattoriale * i;
  }

  printf( "%d! = %d\n", numero, fattoriale );

  return 0;
}
