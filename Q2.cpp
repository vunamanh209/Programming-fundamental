#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	float radius, area, circumference;
	scanf("%f", &radius);
	area = PI * radius * radius;
	circumference = 2 * PI * radius;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
		printf("Area of the circle: %.2lf .\n", area);
		printf("Circumference: %.2lf", circumference);
		

  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
