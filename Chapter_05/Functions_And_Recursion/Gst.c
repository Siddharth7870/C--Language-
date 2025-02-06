#include<stdio.h>

//Function decalaration/prototype
void calculateprice(float value);

int main()
{   
    float value = 100.0;
    calculateprice(value);//function call
    printf("Value is : %f\n",value);
    return 0;
}

//Function difinition
void calculateprice(float value){
    value = value + (0.18 * value);
    printf("Final price is: %f\n",value);
}
