#include<stdio.h>


//function declaretion/prototype
void namaste();
void bonjour();

int main()
{   printf("\n");
    printf("Enter f for french & i for indian : ");
    char ch;
    scanf("%c",&ch);

    if( ch == 'i'){
        namaste();
    }
    else{
        bonjour();
    }

    return 0;
}

//function difinition
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour");
}