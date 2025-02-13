#include<stdio.h>

// user defined
struct student
     {
        char name;
        int roll_no;
        float cgpa; 
     };

int main()
{   
    struct student s1;
    s1.name = "Ramanand kumar ";
    s1.roll_no = 2422241;
    s1.cgpa = 7.8;

    
    return 0;
}