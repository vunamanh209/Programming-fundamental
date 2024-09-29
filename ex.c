#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");

  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("\nOUTPUT:\n");
    printf("%d is an even number.\n", number);
  } else {
    printf("\nOUTPUT:\n");
    printf("%d is an odd number.\n", number);
  }

  system("pause");
  return 0;
}

