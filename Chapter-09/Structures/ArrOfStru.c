#include<stdio.h>
#include<string.h>


struct student{
    int roll;
    float cgpa;
    char name[ 100 ];
};

int main()
{
    struct student ece[ 100];
    ece[0].roll = 242241;
    ece[0].cgpa = 8.6;
    strcpy(ece[0].name , "Ramanand");
    
    printf("Student Name = %s\n", ece[ 0 ].name);
    printf("Student roll no = %d\n", ece[ 0 ].roll);
    printf("Student cgpa = %.2f\n" ,ece[0 ].cgpa);

    return 0;
}