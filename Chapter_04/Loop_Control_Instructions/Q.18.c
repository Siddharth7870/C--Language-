#include<stdio.h>

int main()
{
    /*
     Q.18.-> Keep taking numbers as input from user until user enters a number which is multiple of 7.
    */
   int n;
   do{
    printf("Enter a number : ");
    scanf("%d",&n);
    //printf("%d \n",&n);
    //if(n%7!=0)
    if( n%7 == 0) // Multiple of 7.
    {
        break;
    }
   }while(1);
   printf("There is multiple of 7 : ");

   return 0;

}