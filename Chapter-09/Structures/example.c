#include<stdio.h>
#include<string.h>


// user defined
struct student
     {
        char name[100];
        int roll_no;
        float cgpa; 
     };

int main()
{   
    struct student s1;
    //s1.name[100]= "Ramanand kumar ";
    strcpy(s1.name,"Ramanand kumar");
    s1.roll_no = 2422241;
    s1.cgpa = 8.8;

    printf("Student name = %s\n",s1.name);
    printf("Student roll no = %d\n",s1.roll_no);
    printf("Student cgpa = %.2f\n",s1.cgpa);

    return 0;
}