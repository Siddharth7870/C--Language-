#include<stdio.h>

// Q.01.-> Enter  address ( house no, block, city , state ) of 5 people.

struct address{
    char name[ 100 ];
    int house_no;
    char block[ 100 ];
    char city[ 100 ];
    char state[ 100 ];

};

int main()
{   
    struct address P1 = { "Ramanand" , 10/2, "Bodhgaya", "Gaya", "Bihar" };
    struct address P2 = { "Siddharth" , 10/2, "lumbini", "medition", "Nepal" };
    struct address P3 = { "Gautam" , 10/2, "Bodhgaya", "Gaya", "Mountan" };
    struct address P4 = { "Buddha" , 10/2, "Bodhgaya", "kashmir", "Nepali" };
    struct address P5 = { "Bhimrao Ambedkar" , 10/2, "Bodhgaya", "Gaya", "Madhya Pradesh" };

    printf("Person Name = %s\n House no = %d\n Block Of Person = %s\n City of Person = %s\n State of Person = %s\n", P1.name, P1.house_no, P1.block, P1.city, P1.state );
    printf("Person Name = %s\n House no = %d\n Block Of Person = %s\n City of Person = %s\n State of Person = %s\n", P2.name, P2.house_no, P2.block, P2.city, P2.state );
    printf("Person Name = %s\n House no = %d\n Block Of Person = %s\n City of Person = %s\n State of Person = %s\n", P3.name, P3.house_no, P3.block, P3.city, P3.state );
    printf("Person Name = %s\n House no = %d\n Block Of Person = %s\n City of Person = %s\n State of Person = %s\n", P4.name, P4.house_no, P4.block, P4.city, P4.state );
    printf("Person Name = %s\n House no = %d\n Block Of Person = %s\n City of Person = %s\n State of Person = %s\n", P5.name, P5.house_no, P5.block, P5.city, P5.state );
   


    return 0;
}