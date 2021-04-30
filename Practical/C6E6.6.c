#include <stdio.h>

char line[100];
int hour; 
int wage=190; 

int main (){
  printf("hours worked at week: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &hour);

  if (hour >= 130){
    printf("This person is overworking\n");//working more than 130 h at week
    wage = (hour * wage);
    printf("The wage is: %d\n", wage);//prints the total wage
  } else {
    wage = (hour * wage);
    printf("The wage is: %d\n", wage);//prints the total wage
  }
  return (0);
}
