#include<stdio.h>
#include<conio.h>
void main()
{
    cal();
}
void cal()
{
    int a=7,b=5;
    rect(a,b);
    rect(a,b);
}
void rect(int h,int w)
{
	int p,ar;
	p=2*(h+w);	
	printf("perimeter = %d \n",p);
	ar=w*h;
	printf("Araa= %d",ar);
}


