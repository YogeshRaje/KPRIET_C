/* Task- Create a program to find the multiplication of two numbers using a function and pointers.

Here's how your program should work:

Create a function that accepts three pointers.

Inside the function multiply values represented by two pointers and assign the result to the address of the third pointer.

Inside the main function, create three variables, two variables with values 13 and 9 and the third variable to store their product.

Call the function with addresses of the 3 variables as arguments.

Store the returned value inside a pointer and print the value pointed by the returned address. */

#include <stdio.h>

int* multiplication (int* a, int* b, int* c) {
    *c = *a * *b;
    return c;
}

int main() {
    
    int num1 = 13;
    int num2 = 9;
    int multiple;
    
    int* result = multiplication(&num1, &num2, &multiple);
    
    printf("The multiplication is: %d", *result);
    
    return 0;
}
