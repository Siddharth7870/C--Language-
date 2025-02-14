#include<stdio.h>
#include<string.h>

// Q.6.-> Check if a given character is present in a string or not .

void checkChar( char str[ ] );

int main()
{   
    char str[ ] = "Apnacollege";
    //char ch = 'w';

    checkChar( str );

    return 0;
}

void checkChar( char str[ ])
{
    for( int i = 0; str[ i ] != '\0'; i++ )
    {
        if( str[ i ] == 'e' )
        {
            printf("Character is present!");
            return;
        }
    }
    printf("Character is not present:");
}