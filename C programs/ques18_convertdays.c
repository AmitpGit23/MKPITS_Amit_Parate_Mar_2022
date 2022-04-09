#include<stdio.h>
#include<conio.h>
int main()
{
	int days,y,m,d;
	printf("Enter days : ");
	scanf("%d",&days);
	
	y=days/365;
	printf("Year : %d",y);
	days=days-(365*y);
	m=days/30;
	printf("\n Month : %d",m);
	d=days-(m*30);
	printf("\n day : %d",d);
	
}
