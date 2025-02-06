#include<stdio.h>

int main()
{
    /*
    Q.16 -> Print the table of a number input by the user?
    */
   int table;
   printf("Enter table number : ");
   scanf("%d",&table);
   
        //10>=i or i<=10.
   for(int i=1; i<=10 ; i++)
   {
    printf("%d \n",table*i);
   }
   
   return 0;
}