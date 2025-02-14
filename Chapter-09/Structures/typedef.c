#include<stdio.h>
#include<string.h>


// user defined
typedef struct ComputerEngineeringStudent {
    char name[ 100 ];
    int roll ;
    float cgpa;
} CES;

int main()
{
    CES s1;
    strcpy( s1.name, "Ramanand kumar");
    s1.roll = 242241;
    s1.cgpa = 8.9;

    printf("Student Name = %s\n", s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Stuent cgpa = %.2f\n", s1.cgpa);
    
    return 0;
}