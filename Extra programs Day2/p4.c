/*
Create a program to change the value of a variable using a pointer. Here's how the program should work:

Get input value for a double variable salary.
Assign the address of salary to a double pointer.
Now use the pointer to

print the value of salary,
increase the salary by 2 times,
print the new salary.

*/

#include <stdio.h>

int main() {
    double salary;
    
    printf("Enter your salary: ");
    scanf("%lf", &salary);
    
    double* ptr = &salary;
    
    printf("Your Salary: %.2lf\n", *ptr);
    
    double new_salary = *ptr * 2;
    
    printf("Your double salary: %.2lf", new_salary);
}
