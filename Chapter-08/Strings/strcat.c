#include<stdio.h>
#include<string.h>

int main()
{
    char sum1[100] = "Siddharth ";
    char sum2[] = "Ramanand";

    strcat( sum1, sum2 );
    puts( sum1 ); // O/P : Siddharth Ramanand
    return 0;

}
