#include<stdio.h>
#include<math.h>

int main()
{
    //int b=3,c=4;
    //b = c = 3;
    //int a = b + c;
    int b,c;
    printf("Enter b number : ");
    scanf("%d",&b);

    printf("Enter c number : ");
    scanf("%d",&c);

    int power = pow(b,c);
    printf("Power of is : %d",power);
    return 0;
}