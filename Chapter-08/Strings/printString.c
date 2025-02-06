#include<stdio.h>

void printString( char title[] );

int main()
{
    char title[] = {'S','I','D','D','H','A','R','T','H','\0'};
    char FristName[] = "Ramanand";
    
    printString(title);
    printString(FristName);
    return 0;
}

void printString( char title[] )
{
    for( int i = 0; title[i] != '\0' ; i++)
    {
        printf("%c",title[i]);
    }
    printf("\n");
}