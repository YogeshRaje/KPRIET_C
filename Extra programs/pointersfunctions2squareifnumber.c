//Find the square of a number
#include <stdio.h>

void findSquare(int* number) {
  
  int square = *number * *number;

  *number = square;
}

int main() {

  int number = 21;

  findSquare(&number);
  
  printf("Square is %d", number);

  return 0;
}
