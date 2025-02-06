/*
-> Practice.
Q.46.->
Create a 2d array, storing the tables of 2 & 3.
*/

#include<stdio.h>

void storeTable(int table[][10],int r, int c, int number );

int main()
{
    int table[2][10];
    
    storeTable(table, 0, 10, 2); 
    storeTable(table, 1, 10, 3);

    for(int i=0; i<10; i++)
    {
        printf("%d \t",table[0][i]);
    }

    
    return 0;
}

void storeTable( int table[][10], int r, int c, int number )
{
    for(int i = 0; i < c; i++) // 0 to 10
    {
        table[r][c] = number * (i+1); // 2,4,6...
    //  table[0][0] = 2 * 1; table[0][1] = 2 * 2; table[0][2] = 2 * 3; table[0][3] = 2 * 4; .....
    }
}