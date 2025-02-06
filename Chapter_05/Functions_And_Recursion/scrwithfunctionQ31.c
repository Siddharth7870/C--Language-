#include<stdio.h>
#include<math.h>

// Q.31.-> Write functions to calculate area of a square, a circle & a rectangle.

//Function declaration/prototype
void square(int s);
void circle(float R);
void rectangle(int r);

int main()
{   int s;
    float R,pi=3.14;
    int r;

    square(s);
    circle(R);
    rectangle(r);
    return 0;
}

//Function difinition
void square(int s){
        //int s;
        printf("Enter number : ");
        scanf("%d",&s);
        printf("Area of square is : %d\n\n",s*s);
}

void circle(float R){
        //float pi=3.14;
        printf("Enter number : ");
        scanf("%f",&R);
        printf("Area of circle is : %f\n\n",3.14*R*R);
}

void rectangle(int r){
        int l,b;
        printf("Enter number : ");
        scanf("%d",&l);
        printf("Enter number : ");
        scanf("%d",&b);

        printf("Area of rectangle is : %d",2*(l + b));
}