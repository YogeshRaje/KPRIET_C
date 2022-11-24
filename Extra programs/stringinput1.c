
//String Input  
//Give input as Yogesh Raje ; now you will get output as only Yogesh  Raje 
#include <stdio.h>

int main() {

  char str[20];

  printf("Enter your name: ");
  fgets(str, sizeof(str), stdin);

  printf("%s", str);

  return 0;
}
