#include<stdio.h>
#include<string.h>

// Q.5.-> Write a function to count the occurrence of vowels in a string.

int countVowel( char vowel[] );

int main()
{   
    char vowel[ ] = "Hello World";

    return 0;
}

int countVowel( char vowel[ ] )
{
    int count = 0;

    for( int i = 0; vowel[ i ]  != '\0'; i++)
    {
        if( vowel[i] == 'a' || vowel[i] == 'e' || vowel[i] == 'i' || vowel[i] == 'o' || vowel[i] == 'u')
        {
            count++;
        }
    }
    return count;
}