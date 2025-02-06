#include<stdio.h>

int main()
{
    float celsius,fahrenheit;
    printf("Enter celsius : ");
    scanf("%f",&celsius);
    fahrenheit = (celsius *9/5) + 32;
    printf("Covert celsius to fahrenheit : %f",fahrenheit);
    return 0;
}