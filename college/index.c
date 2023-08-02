#include<stdio.h>
#include<conio.h>
#include<dos.h>// only in tc++
//C Basics
////   1
void main()
{
	clrscr();
	printf("Hi Welcome to C");
	getchar();
}
////   2

void main()
{
	clrscr();
	printf("Hi \nWelcome to C");
	getchar();
}
////   3

void main()
{
	clrscr();
	printf("1	2	3	4	5	6	7	8	9	10");
	getchar();
}
////   4

void main()
{
	clrscr();
	printf("\n1	 \n2    \n3	4	 \n5	 \n6	 \n7	 \n8	 \n9	 \n10");
	getchar();
}
////   5

void main()
{
	clrscr();
	printf("0123456789\b0");
	getchar();
}

////   6


void main()
{
	clrscr();
	printf("0123456789\r9");
	getchar();
}

////   7


void main()
{
	int a = 10, b = 5;
	clrscr();
	printf(" a = %d and b = %d",a,b);
	getchar();
}
////   8

void main()
{
	int a = 10, b = 5;
	clrscr();
	printf(" a = %d and b = %d",b,a);
	getchar();
}
////   9

void main()
{
	int a = 10, b = 5;
	clrscr();
	printf(" a = %c and b = %c",a,b);
	getchar();
}
////   10

void main()
{
	int a = 65, b = 70;
	clrscr();
	printf(" a = %c and b = %c",a,b);
	getchar();
}
////   11

void main()
{
	char a = 'B', b = 'C';
	clrscr();
	printf(" a = %c and b = %c",a,b);
	getchar();
}
////   12

void main()
{
	char a = 'B', b = 'C';
	clrscr();
	printf(" a = %d and b = %d",a,b);
	getchar();
}
////   13



void main()
{
	char a = 'B', b = 'C';
	clrscr();
	printf(" a = %c a\tnd b = %c",a,b);
	getchar();
}

///find out the other escape sequences
///find out the other data types
///find out other format specifiers

////   14

void main()
{
	int a = 10, b = 5;
	clrscr();
	printf(" a = %d  b = %d and %d + %d is %d",a,b,a,b,a+b);
	getchar();
}

////   15

void main()
{
	int a = 10, b = 5,c;
	clrscr();
	c = a + b;
	printf(" a = %d  b = %d and %d + %d is %d",a,b,a,b,c);
	getchar();
}
////   16

/// diagram for escape sequence
void main()
{
	int a = 10, b = 5,c;
	clrscr();
	printf("Enter the value of b  ");
	scanf("%d",&b);
	c = a + b;
	printf(" a = %d  b = %d and %d + %d is %d",a,b,a,b,c);
	getchar();
}
////   17


/// scanning can be into char, float....
//syntax of printf(string)  string with esc sequence   string with format spec
//syntax of scanf   %c  %d   %f...
////   18

void main()
{
	int c;
	clrscr();
	for(c = 1;c<=3;c++)
	{
		printf(" Hello\n");
	}
	getchar();
}

////   19

void main()
{
	int c;
	clrscr();
	for(c = 1;c<=3;c++)
	{
		printf("%d Hello\n",c);
	}
	getchar();
}
////   20

void main()
{
	int c;
	clrscr();
	for(c = 1;c<=3;c++)
	{
		printf("%d ",c);
	}
	printf("\n Now c = %d ",c);
	getchar();
}
////   21


/// a program to print all numbers from1 to 10
/// prgram to sum up all the nums from 1 to 10
void main()
{
	int c,sum;
	for(c = 1;c<=10;c++)
		sum = sum + c;
	printf("\n the sum is %d ",sum);
}
////   22

void main()
{
	int c,start , end = 10,sum;
	for(c = 1;c<=10;c++)
		sum = sum + c;
	printf("\n the sum of num from %d to %d is %d ",end,start,sum);
}
