#include<stdio.h>
#include<conio.h>
void main()
{
	fun1();	
}
void fun1()
{
	int n1,n2,n3;
	printf("Enter first no : ");
	scanf("%d",&n1);
	printf("Enter second no : ");
	scanf("%d",&n2);
	printf("Enter third no : ");
	scanf("%d",&n3);
	mult(n1,n2,n3);
		
}
void mult(int x,int y, int z)
{
	int mul;
	mul=x*y*z;
	printf("Multiplication of three no : %d",mul);
	
}
