#include<stdio.h>
#include<string.h>

// Q.6.-> Check if a given character is present in a string or not .

void checkChar( char str[ ], char ch );

int main()
{   
    char str[ ] = "Apnacollege";
    char ch = 'a';

    return 0;
}

void checkChar( char str[ ], char ch )
{
    for( int i = 0; str[ i ] != '\0'; i++ )
    {
        if( str[ i ] == ch )
        {
            printf("Character is present!");
            return;
        }
    }
    printf("Character is not present:");
}