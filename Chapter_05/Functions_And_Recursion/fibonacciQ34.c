#include<stdio.h>
//Q.34.-->> Write a function to print  n terms of the fibonacci sequence ?

int fib( int n);

int main()
{
    printf("%d",fib(6));
    //fib(6) this place at not call recive
    return 0;

}

//function Recursion
int fib( int n ){
    if( n == 0){
        return 0;
    }
    if( n == 1){
        return 1;
    }
    int fibNm1 = fib( n-1) ;
    int fibNm2 = fib( n-2);
    int fibonacciN = fibNm1 + fibNm2;
   // printf("Fibo of %d is : %d\n",n,fiboN);
    return fibonacciN;
}