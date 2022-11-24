/* 
Task-
Create a program that takes your full name as input and prints your name. Then, change the first letter of your name to X.

If your name is John Williams, it will become Xohn Williams.
If your name is Julie Bing, it will become Xulie Bing.
*/

#include <stdio.h>

int main() {
    char name[30];
    
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    
    name[0] = 'X';
    printf("%s", name);
    
    return 0;
}
