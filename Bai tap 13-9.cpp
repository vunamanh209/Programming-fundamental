#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  //INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	double a;
	double b;
	char op;
	printf("Enter the a number:",a);
	scanf("%lf", &a);
	
	printf("Enter the b number:",b);
	scanf("%lf", &b);
	
	printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    switch(op){
        case '+':
            printf("%.2f\n", a + b);
            break;
        case '-':
            printf("%.2f\n", a - b);
            break;
        case '*':
            printf("%.2f\n", a * b);
            break;
        case '/':
             if (b != 0) {
                printf("%.2f\n", a / b);
            } else {
                printf("Error: Division by zero\n");
            }
        default:
            printf("INVALID INPUT");
    }

  //--FIXED PART - DO NOT EDIT ANYTHING HERE
  printf("\n");
  system("pause");
  return(0);
}
