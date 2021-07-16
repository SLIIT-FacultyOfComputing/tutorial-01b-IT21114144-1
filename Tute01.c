/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float dis , amt ;

  printf("Enter the Distance : ") ;
  scanf( "%f" , &dis ) ;

  if ( dis < 30 )
  {
    amt = 30 * 50  ;
  } 
  else if ( dis > 30 )
  {
    amt = 30 * 50 + ( dis - 30 ) * 40 ;
  } 
  else 
  {
    printf(" Invalid Disstance ") ;
  }

  printf("\nThe Amount to be paid %.2f" , amt) ;

  return 0;
}

