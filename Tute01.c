/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mrk1 , mrk2 , avg ;

  printf ("Enter the Mark 1 : ") ;
  scanf("%f" , &mrk1) ;

  printf ("Enter the Mark 2 : ") ;
  scanf("%f" , &mrk2) ;

  avg = ( mrk1 + mrk2 ) / 2 ;

  printf("\nThe Average is %.2f" , avg) ;

  return 0;
}

