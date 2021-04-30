#include <stdio.h>

int integer; //integer
float floating; //float 
char char1; //character 

int main(void){
  integer = 2; //integer
  floating = 2.0; // float
  char1 = 'B'; // character

  printf("%f as %%d: %d\n", floating, floating); //print errors
  printf("%d as %%f: %f\n", integer, integer); 
  printf("%c as %%d: %d\n", char1, char1); 

  return(0);
}
