#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,add;
	printf("Enter 1st integer : ");
	scanf("%d",&n1);
	printf("Enter 2nd integer : ");
	scanf("%d",&n2);
	
	if(n1==n2)
	{
		add=(n1+n2)*3;
		printf("Sum = %d",add);
	}
	else
	{
		printf("No is not same");
	}
	
}

