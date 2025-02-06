#include<stdio.h>

void printName(char name[] );

int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);

    printName(name);

    return 0;

}

void printName( char name[] )
{
    for( int i = 0; name[i] != '\0' ; i++)
    {
        printf("%c",name[i]);
    }
}