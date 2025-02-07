#include<stdio.h>
#include<string.h>

int main()
{   
    char Go[100] = "Going";
    char Come[100] = "Coming";

    strcpy( Come , Go );
    puts(Come); // O/P : Going

    return 0;

}