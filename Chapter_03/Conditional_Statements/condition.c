#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
 
    // Ternary by shord use if else.
    age >= 18 ? printf("adult") : printf("not adult");

    /*
    if (age > 18)
    {
        printf("Your are adult \n");
        printf("They can vote\n");
        printf("They can drive \n");
    }
    else
    {
        printf("Your are not adult ");
    }
    */

    return 0;
}