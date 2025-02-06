#include<stdio.h>

int main()
{     /*
        -> Practice Qs 14
                          Print the numbers from 0 to n, if n is given by user ?
    */
    /*
      While Loop
      int i=1;
      while(codition)
         {
            printf("Hello While");
           // printf("%d",i);
           i++;
         }
    */

   /*
   int i=1;
   while (i<=5)
   {
    //printf("Hellow world \n");
    printf("%d \n",i);
    i++;
   }
   */
  
  /*
  int n;
  printf("Enter user any Number : ");
  scanf("%d",&n);
  
  int i = 0;
  while( i<=n )
  //while (n>=0 && n<=100)
  {
    printf("%d \n",i);
    //n++;
    i++;
  }
  */

  int n;
  printf("Enter user any Number : ");
  scanf("%d",&n);
   
   for(int i=0; i<=n; i++)
   {
     printf("%d \n",i);
   }
    
    return 0;
}