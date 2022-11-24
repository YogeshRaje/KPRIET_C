//Create the struct variable and initialize members in the same line

#include <stdio.h>

struct Person {
  double salary;
  int age;
};

int main() {

  struct Person person1 = {.age = 25, .salary = 4321.78};
  struct Person person2 = {.age = 31, .salary = 78943.2};

  printf("Age of person1: %d\n", person1.age);
  printf("Salary of person1: %.2lf", person1.salary);

  printf("\nAge of person2: %d\n", person2.age);
  printf("Salary of person2: %.2lf", person2.salary); 
  
  return 0;
}

