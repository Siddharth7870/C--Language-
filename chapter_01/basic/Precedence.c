

#include<stdio.h>
#include<math.h>

int main()
{
    // Operator Precedence *,/,%----: +,-,----: = (assignment),

    /*
    int a = 4 + 9 * 10;
    printf("There is a BODMAS as Answer : %d",a);
    */
   
   // Associativity(for same precedence) , Left to Right
   int a = 4 * 3 / 6 * 2;
   printf("There is Associativity rule with answer : %d",a);

}