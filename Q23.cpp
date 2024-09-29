#include <stdio.h>
#include <stdlib.h>
int add(int a, int b){
	return a + b;
}
int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a,b;
	scanf("%d %d", &a,&b);
	int(*ptr)(int,int);
	ptr = add;
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int ketqua = ptr(a,b);
	printf("%d", ketqua);

  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
