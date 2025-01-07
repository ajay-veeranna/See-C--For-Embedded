/*
Literal qualifier and ther effect in program
assigning properties of literal in shown as follows:
 U or u can used unsigned : 50u
 L or l is for long : 50l
 F or f is used for floating point : 9.8f
 suffixes can be combined U must precede L
*/
#define G (3) //compiler assumes G is charater signed short. 8 bits of memory
#define H (2.3) // H is float signed short. 32 bits of memory
#define J (33000) // J is int signed long. 32 bits of memory 
//we can cut the memory requirement 
#define uJ (33000U) // uJ is int signed short. consumes 16 bits of memory
#include <stdio.h>
int main()
{
	int a= 7;
	int b= 2;
	float c;
	c= a/b;
}