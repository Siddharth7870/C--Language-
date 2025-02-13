#include<stdio.h>

struct student {
    char name[ 100 ];
    int roll;
    float cgpa;
};

int main()
{   
    struct student s1 = {"Ramanand ", 242241, 8.2};
    // use pointer 
    struct student *ptr = &s1;
    printf("Student Name = %s\nStudent roll no = %d\nStudent cgpa = %.2f\n", (*ptr).name, (*ptr).roll, (*ptr).cgpa);
    return 0;
}