#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	float div;
	printf("Enter 1st Numbers : ");
	scanf("%d",&n1);
	printf("Enter 2nd Numbers : ");
	scanf("%d",&n2);
	if(n2 != 0 && n1>n2)
	{
		div=n1/n2;
		printf("Division of  two no is : %.2f",div);
	}
	else
	{
		printf("division is not possible ");
	}
}
