#include<stdio.h>

//Q.30.-> Sum of first n natural numbers ?

//function declaration.
int sum( int n);

int main()
{
    printf("Sum is : %d",sum(5));
    return 0;

}

// Recursion function
int sum( int n){
    if( n==1){
        return 1;
    }
    
    int sumNm1 = sum(n-1); //sum of 1 to n;
    int sumN = sumNm1 + n;

}