#include<stdio.h>

// Q.39.-> Will the address output be same ?

void printAddress( int n);

int main()
{   
    int n = 4;
    
    //printf("Address of n is : %p\n",&n); output - 0061ff1c
    //printAddress(n);// output - 0061ff00
    printf("Addres of n is : %u\n",&n);
    printAddress(n);

    return 0;
}

void printAddress( int n){
      printf("Address of n is : %u\n",&n);
}