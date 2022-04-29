#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the Temperature : ");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("Temperature is less than 0 ");
	}
	else 
	if(n>100)
	{
		printf("temperature is greater than 100");
	}
	else
	{
		printf("temperature is not betwenn 0to 100");
	}
	
}
