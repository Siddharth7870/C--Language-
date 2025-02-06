#include<stdio.h>

// Q.1.-> Make a program that inputs user's name &prints its length.

int printLength( char name[] );

int main()
{
    char name[100];
    fgets( name , 100 , stdin );

    printf("Lenght is : %d ");


    return 0;
}

int printLength( char name[] )
{
    int count = 0;
    for( int i = 0; name[i] != '\0' ; i++)
    {
        count++;
    }
    printf("\n");

    return count-1;

}