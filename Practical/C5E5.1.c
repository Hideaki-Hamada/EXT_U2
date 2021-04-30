#include <stdio.h>

char line[100]; //input data
float temp; //temperature

int main(void) {
  printf("Welcome to the celsius to farenheit converter\n"); //Title
  printf("Enter the temperature in celsius: \n"); //input

  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &temperature); //scanning

  temperature = (9.0/5.0)* temperature + 32; //operations for the temperature

  printf("Your temperature in farenheit is %f.\n", temperature); //output

  return 0;
}
