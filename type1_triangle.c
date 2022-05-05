#include<stdio.h>
#include<conio.h>
void main()
{
	squ();
}
void squ()
{
	float a,b,c,peri;
	printf("enter 1st side : ");
	scanf("%f",&a);
	printf("enter 2nd side : ");
	scanf("%f",&b);
	printf("enter 3rd side : ");
	scanf("%f",&c);
	
	if(a<(b+c) && b<(a+c) && c<(a+b))
	{
		peri=a+b+c;
		printf("\n perimeter = %f",peri);
	
	}
	else
	{
		printf("Invalid values !");
	}
}
