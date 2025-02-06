#include<stdio.h>

void printNumber( int *ptr, int n );

int main()
{
    int ptr[] = { 1, 2, 3, 4, 5, 6};
    printNumber( ptr, 6);
    
    return 0;
}

void printNumber( int *ptr, int n )
{
    for( int i = 0; i<=n ; i++ )
    {
        printf("%d \t", ptr[ i ]);
    }
    printf("\n");
}