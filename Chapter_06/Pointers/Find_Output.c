#include<stdio.h>

// Q.36.-> Find Output

int main()
{   
    int *ptr;
    int x;
     
    ptr = &x;
    *ptr = 0; // x = 0  //ptr in x address that's stor this '0' value address *ptr

    printf(" x = %d\n", x);
    printf(" *ptr = %d\n",*ptr); // value of *ptr address let's address value in hold 

    *ptr += 5; // x = 5 // *ptr means x ,, (*ptr==x)
    printf(" x = %d\n",x);
    printf(" *ptr = %d\n ",*ptr); // alleady x of value 5 so *ptr = 5

    (*ptr)++; // *ptr = *ptr + 1   *ptr = x + 1 -->> 6 // 5 + 1 == 6 
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

    return 0;
}