#include<stdio.h>
#include<conio.h>
void main()
{
	rect();
}
void rect()
{
	int h=7,w=5,peri,area;
	peri=2*(h+w);	
	printf("perimeter = %d \n",peri);
	area=w*h;
	printf("Araa= %d",area);
}
