/*Question: 43. Consider the following array declaration:

int arr[] ={1,2,3,4,5}
for the given array, what will the following give?

A. *(arr+2).  :- 3

B. *(arr+5).  :- 6 (not exist)

*/

#include<stdio.h>

int main()
{ 
    int arr[] = {1,2,3,4,5};
    printf(" *(arr+2) : %d\n", *(arr+2) );
    printf(" *(arr+5) : %d\n", *(arr+5) );
    return 0;
}

