#include<stdio.h>
#include<string.h>

// Q.3.-> Find the salted form of a password entered by user if the salt is "123" & added at the end.

void salting( char password[] );

int main()
{   
    char password[ 100 ];
    scanf("%s",password);

    return 0;
}

void salting( char password[])
{
    char salt[ ] = "123";
    char newPassword[ 200 ];

    strcpy( newPassword, password);// newpassword = ram
    strcat( newPassword, salt ); // newpsssord = ram123
    puts(newPassword);
}