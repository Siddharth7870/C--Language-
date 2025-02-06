#include<stdio.h>

int main()
{
    // Q.21.-> Print the Factorial of a number n.
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("final factorial is : %d \n",fact);
}