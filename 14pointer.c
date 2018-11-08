#include<stdio.h>

int main(){
  int a = 20; // integer variable mit dem wert 10
  int b = 0x20; // integer hexadezimal
  int *ptr;   // zeiger = pointer
  ptr = &a;   //

  char d ='d';
  char *ptr_2;
  ptr_2 = &d;

  printf("Adresse von a: %x\n", &a);    // %x hexadeszimal gibt addesse an
  printf("Zeiger auf Addresse von a: %x\n", ptr);   // zeigt auf addresse
  printf("Wert Hexadezimal: %x\n", *ptr);  // Zeigt auf den Wert (hexadezimal) der Adresse
  printf("Wert Dezimal: %d\n", *ptr);  // Ausgabewert dezimal
  printf("Wert Oktal: %o\n", *ptr);
  printf("\n");
  printf("%x\n", b);
  printf("%x\n", ptr);
  printf("\n");
  printf("%c\n", d);
  printf("%x\n", ptr_2);
  printf("%c\n", *ptr_2);

  return 0;
}
