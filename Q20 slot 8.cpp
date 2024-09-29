#include <stdio.h>
#include <stdlib.h>
	void swap(float *a, float *b){
	float temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float num1, num2;
	scanf("%f %f", &num1, &num2);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	printf("before swap: %.1lf %.1lf. \n",num1, num2);
	
	swap(&num1, &num2);
	
	printf("after swap: %.1lf %.1lf", num1, num2);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return(0);
}
