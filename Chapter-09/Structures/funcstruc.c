#include<stdio.h>

// user dicfend
struct student{
    char name[ 100 ];
    int roll ;
    float cgpa;
};

void printInfo( struct student s1 );

int main()
{
    struct student s1 = { " Ramanand ", 35334, 8.9};
    printInfo( s1 );

    return 0;

}

void printInfo(struct student s1 )
{
    printf("Student Information! \n");
    printf("Student Name = %s\n",s1.name);
    printf("Student roll no = %d\n", s1.roll);
    printf("Student cgpa = %.2f", s1.cgpa);
}