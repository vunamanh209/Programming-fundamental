#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	float *ptr;
	float a;
	ptr = &a;
	scanf("%f", &a);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%p ", ptr);
	ptr++;
	printf("%p", ptr);
  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}

