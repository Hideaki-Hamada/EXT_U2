#include <stdio.h>

int integer; //integer
float floating; //float 
char char1; //character

int main(void){
  integer = 5; //statement of integer
  floating = 3.5; // statement of floating
  char1 = 'B'; // statement of character

  printf("%f as %%d: %d\n", floating, floating); //prints error of %d
  printf("%d as %%f: %f\n", integer, integer); // prints error of %f
  printf("%c as %%d: %d\n", char1, char1); // prints error of %d

  return(0);
}
