#include<stdio.h>

int main()
{
    // Q.19.-> Print all numbers from 1 to 10 except for 6 ?
    for(int i=1; i<=10; i++){
        if( i==6){
            continue;
        }
        printf("%d \n", i);
    }
    printf("There is a 6 number skip : 6");
}