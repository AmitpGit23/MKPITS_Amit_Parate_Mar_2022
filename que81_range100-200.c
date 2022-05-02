#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter any Number :");
	scanf("%d",&n);

	if(100<=n && 200>=n)
	{
		printf("Enter Number is in Range !");
	}
	else
	{
		printf("Entered Number is Not in Range :");
	}
}
