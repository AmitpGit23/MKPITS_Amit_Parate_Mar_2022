 #include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter first No : ");
	scanf("%d",&a);
	printf("Enter second no : ");
	scanf("%d",&b);
	
	if((a%b)==0)
	{
		printf("no is multiplied");
	}
	else if((b%a)==0)
	{
		printf("no is multiplied");
	}
	else
	{
		printf("no is not multiplied");
	}
}
