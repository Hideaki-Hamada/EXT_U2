#include <stdio.h>

char line[10];
int hour; 
int minute;

int main(void) {
  printf("Enter hour(s): ");//input hour
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &hour);//scanning input

  printf("Enter minute(s): "); //input minute
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%d", &minute);//scanning input

  printf("%d hour(s) and %d minute(s) is: %d seconds\n", hour, minute, (hour*3600) + (minute*60));

  return 0;
}
