#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

float calculateCircleArea( float number){
	return PI * number * number;
}
int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	float input;
	float area;
	
	scanf("%f", &input);
	area = calculateCircleArea(input);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%.2f", area);

  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
