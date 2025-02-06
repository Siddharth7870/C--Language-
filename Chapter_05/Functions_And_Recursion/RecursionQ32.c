#include<stdio.h>

// Q.32.-> Print "Hello World" 5 times ?

void printHW(int count);

int main()
{
    printHW(5);
    return 0;
}

//Recursive function
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);//itself call me
}