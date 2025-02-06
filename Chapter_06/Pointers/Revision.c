#include<stdio.h>
int main() {
int age = 22;
int *ptr = &age; // age of address in ptr but *ptr show age of value,
int _age = *ptr;
printf("%d\n", _age);// 22
//address
printf("%p\n", &age);// Address of age : 0061FF18
printf("%p\n", ptr);// Value of ptr but in age address : 0061FF18
printf("%p\n", &ptr);//Address of ptr : 0061FF14
//data
printf("%d\n", age); // age is 22
printf("%d\n", *ptr); // *ptr means &age so age = 22
printf("%d\n", *(&age)); // age of address but *(&age) so *ptr but *ptr = age <-- 22
return 0;
}