#include <stdio.h>
#include <stdlib.h>

int calculateSquare( int number){
	return number*number;
}
int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int input;
	int square;
	
	scanf("%d", &input);
	square = calculateSquare(input);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d", square);

  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
