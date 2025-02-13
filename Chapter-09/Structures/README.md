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
.                    char name[ 100 ];
.                    int roll;
.                    float cgpa;
.                };
<br>
- int main()
{
    struct student s1;
    s1.cgpa = 7.8;

    printf(" Your cgpa : %f ",s1.cgpa );

    return 0;
}
<br>

# ----------- Structures in Memory -------------
-> struct student {
.                    char  name[ 100 ];
.                    int roll_no;
.                    float cgpa;
.
.                  };
<br>
-> name---------roll----------cgpa
<br>
-> 2000---------2100----------2104 
<br>       
-> structures are stored in contiguous memory location.