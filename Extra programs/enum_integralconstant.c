// Integral Constants

#include <stdio.h>

enum Size {
  Small, 
  Medium,
  Large,
  ExtraLarge
};

int main() {

  enum Size shoeSize;

  shoeSize = ExtraLarge;

  printf("%d", shoeSize);

  return 0;
}

