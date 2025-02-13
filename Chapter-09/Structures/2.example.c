#include<stdio.h>
#include<string.h>

// declaration structure
struct student {
    char name[ 100 ];
    int roll_no;
    float cgpa;
};

int main()
{
    struct student s1;
    // s1.name[ 100 ] = "Ramanand kumar";
    strcpy(s1.name, "Ramanand kumar");
    s1.roll_no = 242241;
    s1.cgpa = 8.9;
    
    printf("Student Name = %s\n",s1.name);
    printf("Student roll no = %d\n",s1.roll_no);
    printf("Student cgpa = %f\n", s1.cgpa);

    printf("\n");

    struct student s2;
    strcpy( s2.name, "Siddharth");
    s2.roll_no = 242242;
    s2.cgpa = 9.2;

    printf("Student Name = %s\n",s2.name);
    printf("Student roll no = %d\n" , s2.roll_no);
    printf("Student cgpa = %.2f\n" ,s2.cgpa );

    printf("\n");

    struct student s3;
    strcpy( s3.name , "Santosh");
    s3.roll_no = 242243;
    s3.cgpa = 9.3;

    printf("Student Name = %s\n",s3.name);
    printf("Student roll no = %d\n", s3.roll_no);
    printf("Student cgpa = %.2f\n", s3.cgpa);

    return 0;


}