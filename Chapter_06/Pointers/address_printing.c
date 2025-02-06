#include<stdio.h>

int main()
{   
    int age = 18;
    int *ptr = &age;// age of address inner ptr in

    // Address for print(%p)
    printf("%p \n", &age);// for address print.a Hexadecimal value

    // Addres for normal value (%u)
    printf("%u\n",&age); // for address print  a normal value
    printf("%u\n",ptr);  // address of age 
    printf("%u\n",&ptr); // address of ptr

    return 0;
}