#include<stdio.h>

int main()
{
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello Siddharth";
    puts(canChange);

    char cannotChange = "Hello World";
    puts(cannotChange);
    return 0;
}