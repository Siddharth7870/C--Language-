#include<stdio.h>
#include<string.h>

int main()
{
    char firStr[] = "Apple";
    char secStr[] = "Banana";
    
    printf("%d\n",strcmp(secStr , firStr)) ;// O/P : 1
    printf("%d\n",strcmp(firStr , secStr)) ;// O/P : -1
    return 0;

}