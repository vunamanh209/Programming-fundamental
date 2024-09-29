#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float num;
	
	scanf("%f", &num);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	float *ptr= &num;
	*ptr += 10.0;
	 printf("Updated value: %.1f\n", num);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return(0);
}
