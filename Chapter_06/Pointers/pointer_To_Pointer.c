#include<stdio.h>

// Q.37.-> Print the value of 'i' from its pointer to pointer?
int main()
{
    // float price = 100.0;
    // float *ptr = &price;
    // float **pptr = &ptr;
     
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    
    printf("%d\n",**pptr);
    return 0;
}