#include <stdio.h>
#include <stdlib.h>

void print(){
	int a = 20;
	printf("%p", &a);
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	void (*ptr)();
	ptr = print;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 // printf("%d", ptr);
 	ptr();
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system("pause");
  return(0);
}
