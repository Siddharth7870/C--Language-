#include<stdio.h>
#include<string.h>


int main()
{
    char str[ ] = "Baba saheb bhimrao ambedkar university";
    char ch='u';

    for(int i = 0; str[i] != '\0';  i++)
    {
        if( str[ i ] == ch )
        {
            printf("character is present!");
        }
      
    }
   
   return 0;
}