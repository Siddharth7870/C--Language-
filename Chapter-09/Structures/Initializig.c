#include<stdio.h>
#include<string.h>

struct student {
    char name[ 100 ];
    int roll;
    float cgpa;
};

int main()
{   
    struct student s1 = {"Ramanand kumar", 242241 , 8.9 };
    printf("Student Name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %.2f",s1.cgpa);

    return 0;
}