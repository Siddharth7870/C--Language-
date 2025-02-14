#include<stdio.h>
#include<string.h>

int main()
{
    char firStr[] = "HHC";
    char secStr[] = "HHB";
    //int result = strcmp(firStr , secStr);
    //printf("%d\n",result);// O/P : 1
    // Or
    printf("Comperetion  = %d ",strcmp( firStr, secStr));
    
    return 0;
}