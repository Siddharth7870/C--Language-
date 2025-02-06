#include<stdio.h>

int main()
{   
    int age = 22;
    int *ptr = &age;

    // Address of value print
    printf("Address of age value : %d and age of address : %d",age,&age);// Address of value of print
    printf("%d\n",*ptr);// Address of value of print
    printf("%d\n",*(&ptr)); // Address of print for age why because &ptr and *
    printf("%d\n",&age); // Used & that of address print this age
    printf("%d\n",&ptr); // I have a print the address ptr
    return 0;   
}