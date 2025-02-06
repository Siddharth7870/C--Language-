# ----------------->  Strings <------------------
* Strings : A character array terminated by a '\0' ( null character )null character denotes string termination.

-> For example : 
->             char name[] = { 'R','A','M','A','N','A','N','D','\0'};
->               OR
->             char name[] = "RAMANAND";
<br>

#  ---> Initialising Strings 
-> char[] = {'S','I','D','D','H','A','R','T','H'};
-> OR
-> char[] = "SIDDHARTH";
<br>
-> char college[] = "Baba Saheb Bhimrao Ambedkar University (Lucknow )";
<br>
-> char class[] = "BCA";
<br>
<br>
# What Happens in Memory ?

-> char name[] = {'S,'I','D','D','H','A','R','T','H','\0'};
-> OR
-> char name[] = "SIDDHARTH";
<BR>
-> name :[ S ] [ I ] [ D ] [ D ] [ H ] [ A ] [ R ] [ T ] [ H ] [ \0 ] 
<br>
-> name : 200 201 202 203 204 205 206 207 208 209 </pre>

# --------->  String Format Specifier <-----------
->   " %s " ----> For string.
<br>
-> For example :
<br>
-> char Name[] = "Ramanand";
<br>
-> printf( " %s " , Name);

# -----------------> IMPORTANT <--------------
-> scanf( ) cannot input multi- word wtrings with spaces : 
<br>
-> Here, 
<br>
-> gets( ) & puts( ) come into picture
<br>
-> gets( ) -> fgets( )
<br>

# ------------------> String Functions <---------------
-> gets( str ) -> Dangerous & Outdated.
<br>
-> gets( str ) -> input a string ( even multiword ).
<br>
-> puts( str ) -> Output a string.
<br>
-> fgets( str , n , file) -> Stop when ( n - 1 ) chars inut or new line is entered.
<br>
-> str = name
<br>
-> n = size
<br>
-> file = stdin( standard input )





