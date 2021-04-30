#include <stdio.h>

char line[10];
int hour; 
int minute; 

int main(void) {
  printf("Enter hour: "); //input hour
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &hour); //scanning hour

  printf("Enter minute: ");//input minutes
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &minute);//scanning minutes

  printf("%d hours %d minutes is: %d minutes\n", hour, minute, hour*60 + minute); //results

  return 0;
}
