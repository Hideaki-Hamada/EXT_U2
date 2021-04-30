#include <stdio.h>

float perimeter; 
float area; 

int main(void) {
  printf("You have a 2.3 height rectangle\n"); //rectangle descripcion
  printf("And  width of 6.8\n");
  perimeter = (6.8*2.0) + (2.3*2.0); //operations for the perimeter
  area = 6.8*2.3; //operations of the area
  printf("The area is %f\n", area); //the total area
  printf("The perimeter is %f\n", perimeter); // total perimeter
  return 0;
}
