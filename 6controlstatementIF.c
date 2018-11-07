#include<stdio.h>
#include<stdlib.h>

int main(){
  int number; // declaration variable
  printf("\ninput a Number : "); // \n is new row
  scanf("%d", &number);
  printf("\nThats your number: %d\n", number);

  if(number > 5){
    printf("\nYour Number is : %d . It is bigger than 5! \n", number);
  }

  if(number < 5){
    printf("\nYour Number is : %d . It is smaller than 5!\n", number);
  }

  else{
    printf("\n Your Number is equal 5\n" );
  }
  return 0;
}
