#include <stdio.h>

char line[100];
int answer;

int main (){
  printf("How can you print a string in C?\n"); 
  printf("1 = printf\n"); //show answer one
  printf("2 = print\n"); //show answer 2
  printf("Enter number: "); 
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &answer);

  if (answer == 1){
    printf("Correct!\n");//correct
  } else {
    printf("Try again.");//incorrect 
  }


  return (0);
}
