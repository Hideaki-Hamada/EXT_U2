#include <stdio.h>

char line[100];
int cents; 
int quarters = 0; 
int dimes = 0; 
int nickels = 0; 
int pennies = 0; 

int main(){
  printf("Enter the number of cents: "); //input cents
  fgets(line, sizeof(line), stdin);
  sscanf(line,"%d", &cents);

  if (cents > 100){
    printf("Please input a correct number lower than $1.00\n"); 
    return (1);
  } else if (cents < 1){
    printf("Not less than a penny\n"); 
    return (1);
  } else if (cents == 100){
    printf("you entered a $1.00\n"); 
  }

  while (1){
    if (cents >= 25){
      ++quarters;
      cents -= 25;
    } else if (cents >= 10){
      ++dimes;
      cents -= 10;
    } else if (cents >=5) {
      ++nickels;
      cents -= 5;
    } else if (cents >= 1) {
      ++pennies;
      --cents;
    } else if (cents == 0){
      break;
    }

  }
  printf("%d quarters, %d dimes, %d nickels, %d pennies\n", quarters, dimes, nickels, pennies); 

  return (0);
}
