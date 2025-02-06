#include<stdio.h>

int main()
{
    // Q.23.-> calculate the sum of all numbers between 5 and 50 (including 5 & 50).
    int sum=0;
    for( int i=5; i<=50; i++){
        sum = sum + i;// sum += i
        //.printf("%d\n",i);
    }
    printf("Sum is : %d ",sum);

    return 0;
}