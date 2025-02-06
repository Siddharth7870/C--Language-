#include<stdio.h>

// Q.42.-> Write a function to count the number of odd numbers in an array.
 
int CountNumber( int arr[], int n);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf(" Odd Number Count in arrays : %d\n", CountNumber(arr, 10) );
    return 0;
}
int CountNumber( int arr[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;

}