#include<stdio.h>
#include<math.h>

// Q.29.-> Use library functions to calculate the Square of a number given by user.

int main()
{   
    //int n,power;
    float n,power;

    printf("Enter number : ");
    scanf("%f",&n);

    power = pow(n,2);
    printf("Calculate the square is : %f",power);
    return 0;
}