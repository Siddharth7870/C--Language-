#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age >= 18)
    {
    printf("Your are adult \n");
    //printf("They can vote\n");
    //printf("They can drive \n");
    }
    
    else if(age > 13 && age < 18)
    {
        printf("Teenager \n");
    }
    
    else
    {
        printf("Child");
    }

    return 0;
}
