#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Input an Integer : ");
	scanf("%d",&n);
	if(n>=0 && n<=20)
	{
		printf("range is between 0 - 20");
	}
	else if(n>=21 && n<=40)
	{
		printf("range is between 21 - 40"); 
	}
	else if(n>=41 && n<=60)
	{
		printf("range is between 41 - 60");
	}
	else if(n>=61 && n<=80)
	{
		printf("range is between 61 - 80");
	}
	else if(n<0)
	{
		printf("No is negetive");
	}
	else
	{
		printf("No is greater than 80");
	}
}
