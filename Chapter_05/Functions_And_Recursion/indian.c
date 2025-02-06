#include<stdio.h>


//function declaretion/prototype
void namaste();
void bonjour();

int main()
{   printf("\n");
    printf("Enter f for french & i for indian : ");
    char ch;
    scanf("%c",&ch);//scanf is library function

    namaste();

    // if( ch == 'i'){
    //     namaste();
    // }
    // else{
    //     bonjour();
    // }

    return 0;
}

//function difinition
void namaste(){// User defined function
    printf("Namaste\n");
    bonjour();//indirectly called
}
void bonjour(){
    printf("Bonjour");//printf is library function
}