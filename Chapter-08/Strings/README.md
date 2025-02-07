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
<br>
<br>

# ---------------> String using Pointers <----------------
-> char *str = "Hello World";
<br>
-> Store string in memory & the assigned address is stored in the char pinter  ' str '
<br>
-> char *str = "Hello World"; // Can be reinitialized.
<br>
-> char str[ ] = "Hello World"; // Cannot be reinitialized.
<br>


#  ------------- 1. Standard Library Functions <-----------
-> library for String -> < string.h >
<br>
-> library for pow( n,m ) -> < math.h >
<br>
<b> 1. strlen( str ) <b>
-> count number of characters excluding '\0'
<br>
-> for example : 
<br>
-> char name[100] = "Siddharth";
<br>
-> printf( "length of string : %d\t",strlen( name ));
<br>
-> output : length of string : 9
<br>


# ----------- 2. Standard Library Functions <-------------
-> string of string -> < string.h > 
<br>
-> 2. strcpy( newStr , oldStr ) -> Copies value of old string to new string.
<br>
-> for example : 
<br>
-> char str1[ ] = " Going ";
-> char str2[ ] = " Coming ";
-> strcpy( str2, str1 );
-> puts( str2 );
<br>

# -------------- 3. Standard Library Functions <----------
-> 3. strcat( sum1, sum2 ) -> concatenates first string with second string.
<br>
-> for example :
<br>
-> char sum1[ 100 ] = "Siddharth ";
<br>
-> char sum2[ 100 ] = "Gautam";
<br>
-> strcat( sum1, sum2 );
<br>
-> puts( sum1 );
<br>
-> O/P : Siddharth Gautam
<br>

# -------------- 4. Stardard Library Functions <----------
-> 4. strcmp( firStr, secStr) -> Compares Two strings & returns a value.
<br>
-> 0 -> string equal.
<br>
-> positive -> first > second ( ASCII )
<br>
-> negative -> first < second ( ASCII )












