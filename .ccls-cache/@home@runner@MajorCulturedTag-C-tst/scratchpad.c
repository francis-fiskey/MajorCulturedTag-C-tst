do {    
  printf("Please enter a number between 1 - 10, to exit enter -1: ");
  scanf("%d", &firstNumber);

  if (firstNumber == -1) {
    printf("Thanks for using the program.  Goodbye");
    break;
  }

  // unhappy path; edge case - failed test
  if (firstNumber == 0) {
    printf("Please enter only numbers, and try again.\n");
  }

  // unhappy path; edge case
  if (firstNumber > 10 || firstNumber < 0) {
    printf("The number %d is out of bounds.  Please try again.\n", firstNumber);
  }

  // happy path
  if (firstNumber <= 10 && firstNumber >= 0) {
    printf("The number is %d\n", firstNumber);
  } 
} 