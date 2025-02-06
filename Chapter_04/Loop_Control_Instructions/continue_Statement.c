#include<stdio.h>

int main()
{
    //Continue Statement -> skip to next iteration.
    for( int i = 1; i<=5; i++){
          if( i==3){ // skip
            continue;
          }
          printf("%d \n", i);
    }

    return 0;
}