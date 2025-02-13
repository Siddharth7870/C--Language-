# ------------------ STRUCTURES ----------------------
-> What is structure ?
<br>
-> A collection of values of defferent data types.
<br>
-> Example: 
<br>
-> for a student store the following :
<br>
-> name( string )
<br>
-> roll no ( integer )
<br>
-> cgpa ( float )
<br>

# --------------- Syntax ----------------
-> struct student{
<br>                 char name[ 100 ];
<br>                 int roll;
<br>                 float cgpa;
<br>               };
<br>
- int main()
<br>
{
<br>
     struct student s1;
<br> s1.cgpa = 7.8;
<br> printf(" Your cgpa : %f ",s1.cgpa );

<br>   return 0;
}
<br>

# ----------- Structures in Memory -------------
-> struct student {
<br>                  char  name[ 100 ];
<br>                  int roll_no;
<br>                  float cgpa;
<br>
<br>                 };
<br>
-> name---------roll----------cgpa
<br>
-> 2000---------2100----------2104 
<br>
-> structures are stored in contiguous memory location.