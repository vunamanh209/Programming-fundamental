#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    // @STUDENT: WRITE YOUR OUTPUT HERE:
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    //--FIXED PART - DO NOT EDIT ANYTHING HERE
    printf("\n");
    system("pause");
    return 0;
}

