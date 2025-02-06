#include<stdio.h>

// Q.33.-->> Write a function to calculate Percentage of a student from marks in science ,math & sanskrit.

// function declaration/prototype
float calcumark(float science, float math, float sanskrit);

int main()
{   
    float science = 98;
    float math = 95;
    float sanskrit = 92;
    
    printf("Percentage is : %f",calcumark(science,math, sanskrit));
    return 0;
}

//function difinition
float calcumark(float science, float math, float sanskrit){
    
     return (science + math + sanskrit)/3;



}