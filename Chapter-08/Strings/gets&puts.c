#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter your name , use gets() :  ");
    gets(str);
    printf("Your name is , use puts() : ");
    puts(str);
    return 0;
}