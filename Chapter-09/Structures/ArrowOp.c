#include<stdio.h>

struct student {
    char name[ 100 ];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"Santosh ", 2423, 8.3};
    struct student *ptr = &s1;

    printf("Student Name = %s\n",ptr->name);
    printf("Student Name = %d\n",ptr->roll);
    printf("Student Name = %.2f\n",ptr->cgpa);
    return 0;
}