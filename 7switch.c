#include<stdio.h>
#include<stdlib.h>

int main(){
  int number;

  printf("Input a Number from 1 to 4: ");
  scanf("%d", &number);
  printf("Your number is: %d \n", number);

  switch(number){
    case 1: printf("ONE\n"); break;// case Ausdruck: anweisung; break;
    case 2: printf("TWO\n"); break;// case Ausdruck: anweisung; break;
    case 3: printf("THREE\n"); break;// case Ausdruck: anweisung; break;
    case 4: printf("FOUR\n"); break;// case Ausdruck: anweisung; break;
    default: printf("IDIOT\n");
  }
  return 0;
}
