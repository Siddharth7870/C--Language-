#include<stdio.h>

// Q.32.--> Write a function to convert celsius to fahrenheit.

// Function declaration/prototype
float converTemp( float celsius);

int main()
{   
    float far = converTemp(37);  //function call converTemp(float celsius)
    printf("fahrenheit : %f",far);
    
    return 0;
}

// function difinition
float converTemp( float celsius){
    float far = celsius*(9.0/5.0) + 32;
    return far;
    
    
    
    //This is wrong direction coding below
    // float celsius,fahrenheit,
    // printf("Enter celsius : ");
    // scanf("%f",&celsius);
    // fahrenheit = (celsius *9/5) + 32;
    // return fahrenheit;
    

}