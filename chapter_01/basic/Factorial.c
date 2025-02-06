#include<stdio.h>
//there is not write this code of Calculate Factorial
int main()
{
    int n;
    printf("Enter nth number:\n ");
    scanf("%d",&n);

    int calculate = n*( n-1)*1;
    printf("There is a Calculate factorial=%d",calculate);

    return 0;
}