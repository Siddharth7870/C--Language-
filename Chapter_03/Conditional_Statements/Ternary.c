#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
 
    // Ternary by shord use if else.
    age >= 18 ? printf("adult") : printf("not adult");

    return 0;
}
