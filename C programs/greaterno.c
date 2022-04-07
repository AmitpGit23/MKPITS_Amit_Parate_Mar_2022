#include<stdio.h>
#include<conio.h>
int main()
{
	int p1,p2,p3;
	printf("Enter 1st Integer : ");
	scanf("%d",&p1);
	printf("Enter 2nd integer : ");
	scanf("%d",&p2);
	printf("Enter 3rd integer : ");
	scanf("%d",&p3);
	
	if(p1>p2 && p1>p3)
	{
		printf("1st no is greater ");
	}
	else
	if(p2>p3 && p2>p1)
	{
		printf("2nd no is greater ");
	}
	else
	{
		printf("3rd no is greater ");
	}
}
