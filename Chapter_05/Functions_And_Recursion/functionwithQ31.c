#include<stdio.h>
#include<math.h>

// Q.31.-> Write functions to calculate area of a square, a circle & a rectangle.

//function declaration/prototype.
float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length, float width);


int main()
{   
    float side,radius,length,width;
    printf("Enter side number : ");
    scanf("%f",&side);
    printf("Area of square : %f\n\n",squareArea(side));

    printf("Enter radius number : ");
    scanf("%f",&radius);
    printf("Area of circle : %f\n\n",circleArea(radius));

    printf("Enter length : ");
    scanf("%f",&length);
    printf("Enter width : ");
    scanf("%f",&width);
    printf("Area of Rectangle : %f",rectangleArea(length,width));
    return 0;
}

//function difinition
float squareArea(float side){
      return side * side;
}

float circleArea(float radius){
    return 3.14 * radius * radius;
}

float rectangleArea(float length, float width){
      return length * width ;
}
