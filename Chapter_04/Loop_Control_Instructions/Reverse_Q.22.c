#include<stdio.h>

int main()
{
    // Q.22.-> Print reverse of the table for a number n ?
    int n;
    printf("Enter reverse number : ");
    scanf("%d",&n);
     
    int reverse=1;
    for(int j=n; j<=10; j-- ){
        reverse = reverse * j;
        //reverse = reverse + j;
        printf("%d \n",j);
    } 
     printf("Reverse is table : %d\n",reverse);

    return 0; 
}