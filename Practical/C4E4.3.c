#include <stdio.h>

int perimeter; 
int area; 

int main(void) {
  printf("You have a 5 in rectangle\n"); // rectangle descripcion
  printf("And a width of 3\n");
  perimeter = (3*2) + (5*2); //operations for the perimeter
  area = 3*5; //operations of the area
  printf("The area is %d\n", area); //prints the total area
  printf("The perimeter is %d\n", perimeter); //prints the total perimeter
  return 0;
}
