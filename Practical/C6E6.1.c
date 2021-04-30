#include <stdio.h>
#include <math.h>

char line[80];
float point1; 
float point2; 
float result; 

int main(void){

  printf("Point 2 point distance\n");//program presentation

  printf("Enter first point: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &point_1);

  printf("Enter second point: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%f", &point_2);

  while (1){//start while loop

  result = (point1*point1) + (point2*point2);

  if (result == 0){//if the result is 0  
    printf("0 * 0 is 0 please input another number\n");
    break; //breaks cycle 
  } else //Result =! 0

  result = sqrt(result); //sqrt

  printf("The distance is %f\n", result); //print sqrt
  break;//breaks cycle 
  }

  return(0);
}
