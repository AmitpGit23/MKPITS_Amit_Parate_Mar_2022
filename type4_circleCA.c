#include<stdio.h>
#include<conio.h>
int main()
{
	int r=6,c,ar;
	c=fun(r);
	printf("circumference= %d \n",c);
	ar=fun1(r);
	printf("Area = %d",ar);	
}
int fun(int a)
{
	int c;
	c=2*3.14*a;
	return c;
}
int fun1(int a)
{
	int ar;
	ar=3.14*a*a;
	return ar;
}

