#include<stdio.h>

void sum(int *a, int *b);

int main()
{
    int a=5, b=3;
    int sumN;
    sum(&a, &b);
    printf("sum is : %d",sumN);
}
void sum(int *a, int *b)
{
    
    
    int sum = *a + *b;

}

