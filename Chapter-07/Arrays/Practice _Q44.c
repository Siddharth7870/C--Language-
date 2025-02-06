/*
-> Practice: Q44
Q.44.-> Write a function to reverse an array.

*/
#include<stdio.h>

int ReverseArray( int arr[], int n);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printf(" Before Reverse : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ReverseArray( arr, n);

}

int ReverseArray( int arr[], int n)
{
    printf(" After Reverse : ");
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i] );
    }


}