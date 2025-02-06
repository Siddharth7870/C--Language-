#include<stdio.h>

// declaration/prototype
void printHello();

int main()
{
    printHello(); //function call
    printHello(); //function call
    printHello(); //function call
    printHello(); //function call
    return 0;
}

// Function definition
void printHello(){
    printf("Hello! \n");
    printf("This is a function code \n");
}