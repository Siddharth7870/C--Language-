#include<stdio.h>

int main()
{
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello Siddharth";
    puts(canChange);

    char cannotChange = "Hello Duniya";
    puts(cannotChange);
    cannotChange = "Hello India";
    puts(cannotChange);
    return 0;
}