/* 
Task -
Create a program that computes the factorial of a number.

Take an input number from the user
Create a function that takes the number as a parameter.
Inside the function check if the number is greater than 0.
If true, return number multiplied by a recursive call to the function with parameter 1 less than number
Else, return 1


*/

#include <stdio.h>

int fact (int n);

int main() {
    
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    
    if(number > 0) {
        int result = fact(number);
        printf("The Factorial is : %d", result);
    }
    else {
        printf("Enter positive value");
    }
    
    return 0;
}

int fact (int n) {
    
    if(n == 1 || n==0) {
        return 1;
    }
    else {
        return n * fact(n-1);
    }
    
}

