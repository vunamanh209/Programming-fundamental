#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    // @STUDENT: WRITE YOUR OUTPUT HERE:
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    //--FIXED PART - DO NOT EDIT ANYTHING HERE
    printf("\n");
    system("pause");
    return 0;
}

