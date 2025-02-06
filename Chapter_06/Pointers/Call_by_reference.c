#include<stdio.h>

// void swap(int *a, int *b);

// int main()
// {   
//     int x = 3, y = 5;
//     swap(&x,&y);
//     printf("x = %d  &  y = %d\n",x,y);
//     return 0;
// }

// //Call by reference
// void swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf(" *a = %d  &  *b = %d\n",*a,*b);
// }


void printAddress(int *n );

int main()
{
    int n = 4;
    printAddress(&n);
    printf("Address of n is = %d\n",&n);
    return 0;
}

void printAddress(int *n){
    printf("Address of *n is = %d\n",n);
}