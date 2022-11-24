//Return pointers from a function

#include <stdio.h>

int* findSquare(int* number) {
  
  int square = *number * *number;

  *number = square;

  return number;
}

int main() {

  int number = 21;

  int* result = findSquare(&number);
  
printf("Result is %d", *result);

  return 0;
}

