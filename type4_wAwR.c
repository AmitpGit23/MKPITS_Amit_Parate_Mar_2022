#include<stdio.h>
#include<conio.h>
int main()
{
	int a=2,b=4,r;
	r=fun(a,b);
	printf("sum =%d",r);
}
int fun(int x,int y)
{
	int r;
	r=x+y;
	return r;
}
