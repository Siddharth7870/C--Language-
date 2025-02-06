#include<stdio.h>

int main()
{
    // Q.20.-> Print all the odd numbers from 5 to 50 ?
     
     /*
     for( int i=5; i<=50; i++){
        if(i%2==0){ // there is even number skip.
            continue;
            //break;
        }
        printf("%d \n",i);
     }
     printf("There is odd number : ");
     */
     
    // Or

    for(int i=5; i<=50; i++){
        if(i%2!=0){
            printf("There is all odd number : ");
            printf("%d \n",i);
            //printf("There is a odd number : ");
        }
    }

    return 0;
}