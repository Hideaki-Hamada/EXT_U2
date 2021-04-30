#include <stdio.h>

char line[10];
float width; 
float height; 
float perimeter; 

int main(void) {
  printf("Perimeter calculator\n"); //Title

  printf("Enter width: "); //input width
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &width);//scanning input

  printf("Enter height: "); //input height
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &height); //scanning input

  if (width==height){ //Is a square?
    printf("This is a square\n"); //Stop if is a square
  }

  else {
    perimeter = 2 * (height + width); //operations for the perimeter
    printf("Your perimeter is: %f\n", perimeter); //prints the result

  }
  return 0;
}
