#include<stdio.h>

int countOdd( int arr[ 8 ] )
{
    int count = 0;
    for( int i = 0; i < 8 ;  i++ )
    {
        if( arr[ i ] % 2 != 0 )
        {
            count++;
        }
    }
    return count++;
}

int main()
{   
    int arr[ 8 ] = {1,2,3,4,5,6,7,8};

    int result = countOdd( arr );
    printf( " Count Odd Number = %d ", result);

    return 0;
}

