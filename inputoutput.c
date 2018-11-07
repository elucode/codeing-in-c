#include <stdio.h>
#include <stdlib.h>

int main()
{
int alter;
printf("Wie alt sind Sie?");
scanf("%d", &alter);
printf("\nIn %d Jahren sind Sie 100!\n", 100-alter);
printf("Wie groß sind Sie?");
scanf("%d", &alter);
return 0;
}
