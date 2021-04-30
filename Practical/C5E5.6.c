#include <stdio.h>

char line[10];
int minute; 

int main(void) {
  printf("Enter minute(s): "); //input minutes
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &minute); //scanning minutes

  printf("%d minutes is: %d hours %d minutes\n", minute, minute/60, minute%60);// Results

  return 0;
}
