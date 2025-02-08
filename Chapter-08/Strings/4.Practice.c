#include<stdio.h>
#include<string.h>

// Q.4.-> Write a function named slice, whicd takes a string & returns a sliced strig from index n to m .

void slice(char sliced[ ], int n, int m);

int main()
{
    char sliced[ 100 ] = "Hellow World";
    slice(sliced , 3, 7); // O/P = low W

    return 0;
}

void slice( char sliced[ ] , int n , int m )// n & m are valid value
{
    char newSliced[ 200 ];
    int j = 0;
    for( int i = n; i<=m; i++, j++ )
    {
        newSliced[ j ] = sliced[ i ];
    }
    newSliced[ j ] = '\0';
    puts( newSliced );

}