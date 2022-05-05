#include<stdio.h>
#include<conio.h>
void main()
{
	
	fun();
}
void fun()
{
	int a=2,b=4;
	add(a,b);
	
}
void add(int x,int y)
{
	int sum;
	sum=x+y;
	printf("sum= %d",sum);
}
