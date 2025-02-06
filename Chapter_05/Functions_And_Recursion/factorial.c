#include<stdio.h>

// Q.31.-> Factorial of n ?

//function of Declaration/protoype
int factorial(int n);

int main()
{
    printf("Factorial is : %d",factorial(9));
    return 0;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    int factoria = factorial(n-1);
    int factN = factoria * n ;
    return factN;

} 