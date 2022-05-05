#include<stdio.h>
#include<conio.h>
void main()
{
	int cir,ar;
	cir=fun();
	printf("circumference of circle = %d \n",cir);
	ar=fun1();
	printf("Area= %d",ar);
}
int fun()
{
	int r=6,cir;
	cir=2*3.14*r;	
}
int fun1()
{
	int r=6,ar;
	ar=3.14*r*r;
}
