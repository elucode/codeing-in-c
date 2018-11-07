#include <stdio.h>
#include <stdlib.h>

int main(){
// declaration variablen
  int zahl1 = 10;
  int zahl2 = 5;
  int summe;
  int differenz;
  int produkt;
  int quotient;

//Rechenblock
  summe = zahl1 + zahl2;
  differenz = zahl1 - zahl2;
  produkt = zahl1 * zahl2;
  quotient = zahl1 / zahl2;

//Ausgabe
  printf("#Grundrechenarten mit den Variablen %d %d durchgefuehrt\n", zahl1, zahl2);
  printf("+ zahl1 = %d\t", zahl1);
  printf("zahl2 = %d\n", zahl2);
  printf("+ Summe : %d\n", summe);
  printf("+ Differenz : %d\n", differenz);
  printf("+ Produkt : %d\n", produkt);
  printf("+ Qutient : %d\n", quotient);

  return 0;
}
