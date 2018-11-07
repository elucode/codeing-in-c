#include <stdio.h>
#include <stdlib.h>

int main()
{
  int altermann;
  int alterfrau;
  int gewicht;

  printf("Wie alt sind Sie?");
  scanf("%d", &altermann);
  printf("\nIn %d Jahren sind Sie 100!\n", 100-altermann);

  printf("Wie alt ist ihre Frau?");
  scanf("%d", &alterfrau);
  printf("\nIn %d Jahren sind Sie 100!\n", alterfrau);

  printf("Wie schwer sind sie?");
  scanf("%d", &gewicht);
  printf("\nIhr Gewicht ist: %d \n", gewicht);

  return 0;
}
