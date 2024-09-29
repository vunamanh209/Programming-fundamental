#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int month;
    printf("Enter the month number (1-12): ");
    //scanf("%d", &month);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    // @STUDENT: WRITE YOUR OUTPUT HERE:
    switch (month) {
        case 1:  printf("January\n"); break;
        case 2:  printf("February\n"); break;
        case 3:  printf("March\n"); break;
        case 4:  printf("April\n"); break;
        case 5:  printf("May\n"); break;
        case 6:  printf("June\n"); break;
        case 7:  printf("July\n"); break;
        case 8:  printf("August\n"); break;
        case 9:  printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid month number\n");
    }
	scanf("%d", &month);
    //--FIXED PART - DO NOT EDIT ANYTHING HERE
    printf("\n");
    system("pause");
    return 0;
}

