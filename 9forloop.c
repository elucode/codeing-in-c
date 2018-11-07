#include<stdio.h>   //bib
#include<stdlib.h>  //bib

int main(){
  int i, j;

  // rows
  for(i=0; i<10; i++) {
	   printf("\nZeile %5d: ", i+1);
     //stars
     for(j=0; j<=i; j++) {
       printf("*");
     }
   }
   printf("\n");
   return 0; //
}
