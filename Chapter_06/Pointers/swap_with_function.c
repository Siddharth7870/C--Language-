#include<stdio.h>

//Q.38.-> Function using with swap two number ?

// function declaretion/prototype
void swap( int a , int b);
void _swap( int *a, int *b);

int main()
{   
    //int a = 3, b = 5;
    //swap(a,b);
    int x = 8, y = 4; 
    swap(x,y);
    printf("swap x = %d,  swap y = %d, ",x,y);
    
    return 0;
}

// Call by value
void swap( int a, int b ){
       int t = a;
       a = b;
       b = t;
       printf("swap a = %d,  swap b = %d, ",a,b);
}
// Call by reference
void _swap( int* a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("");
}