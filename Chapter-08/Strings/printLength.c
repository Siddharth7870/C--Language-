#include<stdio.h>

// Q.1.-> Make a program that inputs user's name &prints its length.

int printLength( char name[] );

{
    int i = 0;
    for( i = 0; name[i] != '\0' ; i++ );
    return i;
}
int main()
{
    char name[100];
    fgets( name , 100 , stdin );


    return 0;
}