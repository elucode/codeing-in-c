#include<stdio.h>
#include<stdlib.h>

int main(){
  int number = 0;

  while(number < 5){ // count up
    number++;
    printf("%d\n", number);
    //number++;
  }

  while(number > 0){ // count down
    number--;
    printf("%d\n", number);
  }

  return 0;
}
