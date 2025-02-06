#include <stdio.h>
void square(int n);
void _square(int *n);

int main()
{
    int number = 4;

    // call by value
    square(number);// function Call  /acutual parameter/
    printf("n is : %d\n", number); // n is : 4

    // call by reference
    _square(&number);
    printf("n is : %d\n", number);//&number so n is : 16

    return 0;
}

// function definition/  parameter/ arument // recurtion
//number>>>>>>> 4
void square(int n){
    n = n * n;
    printf("square is : %d\n", n);// square is : 16
}
//>>>>> value n = 4
void _square(int *n){
    *n = *n * *n;
    printf("square is : %d\n", *n); //square is : 16
}