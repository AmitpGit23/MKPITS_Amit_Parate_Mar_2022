#include<stdio.h>
#include<conio.h>
void main()
{
	fun();
}
void fun()
{
	int r=6;
	crl(r);
	crl1(r);
}
void crl(int x)
{
	int cir;
	cir=2*3.14*x;
	printf("circumference = %d \n",cir);
}
void crl1(int x)
{
	int ar;
	ar=3.14*x*x;
	printf("Area = %d",ar);
}
