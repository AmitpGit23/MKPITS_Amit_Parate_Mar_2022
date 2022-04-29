#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,sum;
	printf("Enter 1st no : ");
	scanf("%d",&n1);
	printf("Enter 2nd no : ");
	scanf("%d",&n2);
	
	sum=n1+n2;
	
	if(sum==30 || n1==30 || n2==30)
	{
		printf("True !");
	}
	else
	{
		printf("false");
	}
}
