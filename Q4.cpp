#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a,b,c;
	
	printf("enter a : ", a);
	scanf("%d", &a);
	printf("enter b : ", b);
	scanf("%d", &b);
	printf("enter c : ", c);
	scanf("%d", &c);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(a < b && a < c) {
		printf("a is the minimum number");
	}
	else if(b < c && b < a) {
		printf("b is the minimum number");
	}
	else {
		printf("c is the minimum numbber");
	}
  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
