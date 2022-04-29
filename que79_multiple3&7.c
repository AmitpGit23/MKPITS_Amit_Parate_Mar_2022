#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter any integer : ");
	scanf("%d",&n);
	
	if(n%3==0)
	{
		printf("%d is multiple of 3",n);
	}
	else if(n%7==0)
	{
		printf("%d id multiple of 7",n);
	}
	else
	{
		printf("it is not a multiple if 3 or 7");
	}
}
