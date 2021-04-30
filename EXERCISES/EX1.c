#include <stdio.h>
#include <string.h>


char line[10];
int int_1;
int int_2;
int int_3;
int int_4;
int av;
int max;
int min;

int main(void){
	printf("Enter first number: \n");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d", &int_1);


	printf("Enter second number: \n");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d", &int_2);

	printf("Enter third number: \n");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d", &int_3);


	printf("Enter fourth: \n");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d", &int_4);
 

  {
	  av = (int_1+int_2+int_3+int_4)/4; //OPerations
	  max = int_4; //Max is 4
	  min = int_1; //Max is 1

	  printf("Average =  %d\n", av); 
	  printf("Maximum is %d\n", max); 
	  printf("Min is %d\n", min); 
  }
	
	return 0;
}
