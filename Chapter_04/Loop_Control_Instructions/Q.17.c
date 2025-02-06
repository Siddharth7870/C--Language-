#include<stdio.h>

int main()
{
    /*
     Q.17.-> Keep taking numbers as input from user until user enters an odd number.
    */
   int n;
   

   do{
    printf("Enter number :");
    scanf("%d",&n);
    //printf("%d \n",n);

    if(n%2 != 0)
    {
        break;

    }

   }while(1);
   printf("There is a odd number :");

// for(;;){
//     printf("Enter Number :");
//     scanf("%d",&n);
//     if(n%2!=0)
//     break;
// }
// printf("There is odd number :");


   return 0;

}