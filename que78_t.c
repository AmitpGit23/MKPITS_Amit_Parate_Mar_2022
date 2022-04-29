#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter any no : ");
	scanf("%d",&n);
	if((100-n)<=10 || (200-n)<=100)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
