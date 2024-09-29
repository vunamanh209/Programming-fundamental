#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float *ptr = (float*)malloc(sizeof(float));
	float a;
	scanf("%f", &a);
	ptr = &a;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%.2lf", a);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return(0);
}
