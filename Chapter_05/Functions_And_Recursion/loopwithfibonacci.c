#include<stdio.h>

int main()
{
    int n,i;
    int t1 = 0, t2 = 1, nextTerm;

    // Ask the user for the number of terms.
    printf("Enter the number of term : ");
    scanf("%d",&n);

    printf("Fibonacci sequence : ");

    for( i = 1; i<=n; ++i){
        printf("%d",t1);
    }
  
    
    return 0;
}