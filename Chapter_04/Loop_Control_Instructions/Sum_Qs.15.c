#include<stdio.h>

int main()
{
    /*
    Q.15-> Print the sum of First n Natural Numbers.
    */
   int n;
   printf("Enter the Natural Number : ");
   scanf("%d",&n);

//    int sum = 0;
//    for( int i=1, j=n; i<=n && j>=1 ; i++,j--)
//    {
//     sum = sum + i; //sum = sum + i -> sum += i.
//     printf("%d \n",j);
//     //printf("%d \n", sum = sum + i);
//    }
//    printf("sum is : %d\n",sum);

int sum = 0;
   for( int j=n; j>=1 ; j--)
   {
    sum = sum + j; //sum = sum + i -> sum += i.
    //printf("%d \n",j);
    //printf("%d \n", sum = sum + i);
   }
   printf("sum is : %d\n",sum);

//    for(int i=n ; i>=1; i--)
//    {
//     printf("%d \n",i);
//    }

   return 0;
}

