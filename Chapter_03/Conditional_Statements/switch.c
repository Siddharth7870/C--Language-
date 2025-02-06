#include <stdio.h>

int main()
{
    //int day; // 1-mon, 2-tues, 3-wed
    char day; // m-mon, t-tues, w-wed
    printf("Enter day (m,t,w,th,f,S,s ) : ");
    scanf("%c", &day);

    switch (day)
    {
    case 'm':
        printf("Monday \n");
        break;
    case 't':
        printf("Tuesday \n");
        break;
    case 'w':
        printf("Wednesday \n");
        break;
    case 'T':
        printf("Thursday");
        break;
    case 'f':
        printf("Friday");
        break;
    case 'S':
        printf("Saturday");
        break;
    case 's':
        printf("Sunday");
        break;
    default:
        printf("not a valid day! \n");
    }

    return 0;
}