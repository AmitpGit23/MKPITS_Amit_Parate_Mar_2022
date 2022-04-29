#include<stdio.h>
#include<conio.h>
void main()
{	
    fun();
}
void fun()
{
	int a=2,b=3;
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
void add(int x,int y)
{
	int s;
	s=x+y;
	printf("sum=%d\n",s);
}
void sub(int x,int y)
{
	int sub;
	sub=x-y;
	printf("sub=%d\n",sub);
}
void mul(int x,int y)
{
	int mul;
	mul=x*y;
	printf("mul=%d\n",mul);
}
void div(int x,int y)
{
	int div;
	div=x/y;
	printf("div=%d \n",div);
}

