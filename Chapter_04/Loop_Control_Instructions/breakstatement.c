#include<stdio.h>

int main()
{
    /*
     break statement -> Exit the loop.
    */
    for(int i=1; i<=5; i++)
    {
        if(i==3)
        {
            break;
        }
        printf("%d \n",i);
    }
    printf("end");
    
}
