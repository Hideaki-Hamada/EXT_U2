#include <stdio.h>

char line[10];
float ml; 
float km; 

int main(void) {
  printf("Speed converter (Km/h to M/h)\n"); //Title

  printf("Enter kilometers: "); 
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &km);

  printf("You typed %f kilometers per hour\n", km);

  ml = km * 0.6213712; //Operations
    printf("Converted to miles per hour: %f miles per hour\n", ml); //Results

  return 0;
}
