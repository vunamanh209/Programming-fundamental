#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");

    // Declare constant PI
    const float PI = 3.1416;
    float radius, circumference;

    // INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    scanf("%f", &radius);
    circumference = 2 * PI * radius;

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");

    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("Circumference = %.4f\n", circumference);

    //--FIXED PART - DO NOT EDIT ANYTHING HERE
    printf("\n");
    system("pause");
    return 0;
}

