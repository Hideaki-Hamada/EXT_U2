#include <stdio.h>

char line[10];
float rad; //radius
float vol; //volume

int main(void) {
  printf("Volume o any sphere\n"); //Title
  printf("Enter radius lenght: "); //input radius

  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &radius);

  volume = (4.0/3.0)* 3.1416 * (radius * radius * radius); //formula for a volume

  printf("Your radius is: %f.\n", radius); //print the radius
  printf("The volume is %f\n", volume); //result 

  return 0;
}
