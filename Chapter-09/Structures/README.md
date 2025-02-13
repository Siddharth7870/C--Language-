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
-> int main()
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
<br>

# ------------ Array of Structures -------------
-> struct student ECE[ 100 ];
<br>
-> struct student CEO[ 100 ];
<br>
-> struct student   IT[ 100 ];

<br>
-> ACCESS 
<br>
-> IT[ 0 ].roll = 200;
-> IT[ 0 ].cgpa = 8.3;
<br>

# ------------- Initializig Structures ------------
-> struct student s1 = { "Siddharth" , 242241, 8.9};
<br>
-> struct student s2 = { "Ramanand" , 242243, 8.8 };
<br>
-> struct student s3 = { 0 };
<br>

# -------------- Pointers to Structures ------------
-> struct student s1; ------------> int a;
<br>
-> struct student *ptr; ----------> int *ptr;
<br>
-> ptr = &s1; --------------------> ptr = &a;
<br>

# -------------------- Arrow Operator ---------------
<b> Arrow : </b>
<br>
-> ( *ptr ).code   <--------->  ptr->code
<br>
<b> pointer : </b> 
<br>
-> s1.roll        <---------> ( *ptr ).roll

<br>

# ------------- Passing structure to function -----------
-> // Function prototype
<br>
-> void printInfo( struct student s1 );
<br>
-> --------------- int ---------- a
