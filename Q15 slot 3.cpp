#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    // @STUDENT: WRITE YOUR OUTPUT HERE:
    if (num % 5 == 0) {
        printf("%d is divisible by 5\n", num);
    } else {
        printf("%d is not divisible by 5\n", num);
    }

    //--FIXED PART - DO NOT EDIT ANYTHING HERE
    printf("\n");
    system("pause");
    return 0;
}

