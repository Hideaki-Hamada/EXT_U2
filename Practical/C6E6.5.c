#include <stdio.h>

char line[100];
int year; 

int main (){
  printf("Enter a year: ");//year input
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &year);

  if (year%400==0){//if it's 0
    printf("%d = leap year\n", year); //leap year?
  } else if (year%100==0){//division is =0
    printf("%d = not a leap year\n", year);//leap year? = no
  } else if (year%4==0){//division =0
    printf("%d = leap year\n", year); //leap year? = yes
  } else {
    printf("%d = no a leap year\n", year); //not a leap year
  }
return (0);
