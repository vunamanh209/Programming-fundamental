#include <stdio.h>
#include <stdlib.h>

int findMax (int a, int b, int c){
	if( a >= b && a >= c) return a;
	else if(b >= a && b >= c ) return b;
	else return c;
}
int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", findMax(a,b,c));
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
