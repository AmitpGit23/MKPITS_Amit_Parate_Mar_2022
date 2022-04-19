#include<stdio.h>
#include<conio.h>
int main()
{
	int x, y;
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter value of y : ");
	scanf("%d",&y);
	if(x>=0 && y>=0)
	{
		printf("point lies between 1st quadrant");
	}
	if(x<=0 && y>=0)
	{
		printf("point lies between 2nd quadrant");
	}
	if(x<=0 && y<=0)
	{
		printf("point lies between 3rd quadrant");
	}
	if(x>=0 && y<=0)
	{
		printf("point lies between 4th quadrant");
	}
}
