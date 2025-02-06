#include<stdio.h>

//Q.27.-> Write 2 funtions - one to print "Hello" & second to print "Goodbye".

// declaration/prototype
void printHello();
void printGoodbye();

int main()
{   printf("\n");
    printHello(""); //function call
    printGoodbye(""); //function call
    printHello();
    
    return 0;
}

// Function definition
void printHello(){
     printf("Hello! \n");
}
void printGoodbye(){
     printf("Goodbye \n");
}