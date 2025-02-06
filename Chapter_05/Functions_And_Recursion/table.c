#include<stdio.h>

//function declaration/prototype.
void table( int n);

int main()
{   
    //printf("\n");
    int n;
    printf("Enter table number : ");
    scanf("%d",&n);
    
    //Function call.
    table(n); // Argument/actual parameter.

    return 0;  
}

//Function definition.
void table(int n){//Parameter/formal parameter
    for(int i=1; i<=10; i++){
        printf("%d \n",i*n);
    }
}