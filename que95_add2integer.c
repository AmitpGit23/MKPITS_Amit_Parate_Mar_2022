#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter 1st Number ");
	scanf("%d",&n1);
	printf("Enter 2nd Number ");
	scanf("%d",&n2);
	printf("Enter 3rd Number ");
	scanf("%d",&n3);

	if(n1==n2+n3 || n2==n1+n3 || n3==n1+n2)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
} 
