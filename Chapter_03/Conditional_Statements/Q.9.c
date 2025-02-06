# include<stdio.h>

int main()
{
    /*
     Q.9.-> Write a program to check if a student passed or failed.
     marks > 30 is pass
     marks <= 30 is fail
    */ 
   int marks;
   printf("Enter your marks : ");
   scanf("%d",&marks);

   //marks >= 30 ? printf("PASS") : printf("FAIL");

   if (marks >= 30)
   {
    printf("Pass \n");
   }
   else
   {
    printf("Fail");
   }

   return 0;

}