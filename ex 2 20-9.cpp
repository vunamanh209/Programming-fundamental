#include <stdio.h>
#include <stdlib.h>

int reverseNumber( int n ){
	int rev = 0;
	while(n!=0){
		rev = rev*10 + n%10;
		n /= 10;
	} return rev;
}

int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	printf("%d", reverseNumber(n));
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:


  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
