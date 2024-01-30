#include <stdio.h>
#include <ctype.h>qefqe

static int n = 1;

void printName() {
  n = 2;
  char input[] = "John";

  for (int i = 0; i < 4; i++) {
    // exit condition
    if (i == 2) {
      break;
    }

    // happy path
    printf("%c\n", input[i]);
  }
}

int sumOfTwoNumbers(int x, int y) {
  n = 3;
  int sum = x + y; // within the scope of this func()
  return sum;
}

int determineValueOfInt() {
  int input = 0; // within the scope of this func()
  printf("Please Enter a Number between 1 and 10: ");
  scanf("%d", &input);
  
  if (!isdigit(input)) {
    printf("This is not a number, please try again.");
    determineValueOfInt();
  }
}

int main(void) {  
  printf("The number is %d", determineValueOfInt());

  return 0;
}
