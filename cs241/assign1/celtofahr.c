/*  Charles Treatman  #1.1   celtofahr.c  */

#include <stdio.h>

#define LOWER -20
#define UPPER 160
#define STEP 10

typedef int Temperature;

int main (void)
{
  Temperature celsius;

  printf("Celsius to Fahrenheit Conversions\n");
  
  for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
    printf("%3d Celsius is equivalent to %3.1f Fahrenheit\n", celsius, ((9.0/5.0) * celsius) + 32);
    
  return 0;
}
