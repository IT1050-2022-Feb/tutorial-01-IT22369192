/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1, m2, tot;
  float avg;

  printf("Enter the first mark: ");
  scanf("%d", &m1);

  printf("Enter the second mark: ");
  scanf("%d", &m2);

  tot = m1 + m2;
  avg = tot/2.0;

  printf("Average of the two marks is %.2f.", avg);
  
  
  return 0;
}

